/**
 * @file	externalchipmanager.cpp
 * @brief	外部チップ管理クラスの動作の定義を行います
 */

#include "compiler.h"
#include "externalchipmanager.h"
#include <algorithm>
#include "externalopl3.h"
#include "externalopm.h"
#include "externalopna.h"

/*! 唯一のインスタンスです */
CExternalChipManager CExternalChipManager::sm_instance;

/**
 * コンストラクタ
 */
CExternalChipManager::CExternalChipManager() {}

/**
 * 初期化
 */
void CExternalChipManager::Initialize() {}

/**
 * 解放
 */
void CExternalChipManager::Deinitialize() {
  auto it = m_chips.begin();
  while (it != m_chips.end()) {
    IExternalChip *pChip = *it;
    it = m_chips.erase(it);

    pChip->Reset();
    delete pChip;
  }

  m_c86ctl.Deinitialize();
  m_scci.Deinitialize();
}

/**
 * チップ確保
 * @param[in] nChipType チップ タイプ
 * @param[in] nClock チップ クロック
 * @return インスタンス
 */
IExternalChip *
CExternalChipManager::GetInterface(IExternalChip::ChipType nChipType,
                                   UINT nClock) {
  IExternalChip *pChip = GetInterfaceInner(nChipType, nClock);
  if (pChip == nullptr) {
    switch (nChipType) {
    case IExternalChip::kAY8910:
      pChip = GetInterface(IExternalChip::kYM2203, nClock);
      break;

    case IExternalChip::kYM2203:
      pChip = GetInterface(IExternalChip::kYMF288, nClock * 2);
      break;

    case IExternalChip::kYMF288:
      pChip = GetInterface(IExternalChip::kYM2608, nClock);
      break;

    case IExternalChip::kYM3438:
      pChip = GetInterface(IExternalChip::kYMF288, nClock);
      break;

    case IExternalChip::kY8950:
      pChip = GetInterface(IExternalChip::kYM3812, nClock);
      break;

    case IExternalChip::kYM3812:
      pChip = GetInterface(IExternalChip::kYMF262, nClock * 4);
      break;

    default:
      break;
    }
  }
  return pChip;
}

/**
 * チップ確保 (Inner)
 * @param[in] nChipType チップ タイプ
 * @param[in] nClock チップ クロック
 * @return インスタンス
 */
IExternalChip *
CExternalChipManager::GetInterfaceInner(IExternalChip::ChipType nChipType,
                                        UINT nClock) {
  IExternalChip *pChip = nullptr;

  /* G.I.M.I.C / C86BOX */
  if (pChip == nullptr) {
    pChip = m_c86ctl.GetInterface(nChipType, nClock);
  }

  /* SPFM Light */
  if (pChip == nullptr) {
    pChip = m_scci.GetInterface(nChipType, nClock);
  }

  /* ラッピング */
  if (pChip) {
    switch (nChipType) {
    case IExternalChip::kAY8910:
      pChip = new CExternalPsg(pChip);
      break;

    case IExternalChip::kYM2203:
    case IExternalChip::kYM2608:
    case IExternalChip::kYM3438:
    case IExternalChip::kYMF288:
      pChip = new CExternalOpna(pChip);
      break;

    case IExternalChip::kYM3812:
    case IExternalChip::kYMF262:
    case IExternalChip::kY8950:
      pChip = new CExternalOpl3(pChip);
      break;

    case IExternalChip::kYM2151:
      pChip = new CExternalOpm(pChip);
      break;

    default:
      break;
    }
  }
  if (pChip) {
    m_chips.push_back(pChip);
  }
  return pChip;
}

/**
 * チップ解放
 * @param[in] pChip チップ
 */
void CExternalChipManager::Release(IExternalChip *pChip) {
  auto it = std::find(m_chips.begin(), m_chips.end(), pChip);
  if (it != m_chips.end()) {
    m_chips.erase(it);
    pChip->Reset();
    delete pChip;
  }
}

/**
 * 音源リセット
 */
void CExternalChipManager::Reset() {
  for (auto &m_chip : m_chips) {
    m_chip->Reset();
  }
}

/**
 * ミュート
 * @param[in] bMute ミュート
 */
void CExternalChipManager::Mute(bool bMute) {
  for (auto &m_chip : m_chips) {
    m_chip->Message(IExternalChip::kMute, static_cast<INTPTR>(bMute));
  }
}
