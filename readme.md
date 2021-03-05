Build of PC-9800 emulator Neko 21/W 0.86 that compiles and runs under linux 

- https://simk98.github.io/np21w/index.html

= Instructions =
```sh
$ cd x11
$ ./configure 
$ make 
```

// ---- è`

  ÅK»Ì×ÌgpÊÌ}§
    MEMOPTIMIZE = 0`2

    CPUÉæèÈºÌlðZbg³êé±ÆðúÒµÄ¢é
      MEMOPTIMIZE¢è` c Celeron333AÈ~ÌZJhLbVLø@
      MEMOPTIMIZE = 0   c x86
      MEMOPTIMIZE = 1   c PowerPCÌfXNgbvpRISC
      MEMOPTIMIZE = 2   c StrongARMÌgÝÝpRISC


  RpCÌø«EßèlÌÅK»
    ø«EßèlÅint^ÈOðwèµ½êÉAÅK»ªLøÉ­©È¢
    RpCü¯Ìè`Å·B
    ÊíÍ common.h Ì¨ðgpµÜ·B
      REG8 c UINT8^ / (sizeof(REG8) != 1)Ìê ãÊrbgð0fill·é
      REG16 c UINT16^ / (sizeof(REG16) != 2)Ìê ãÊrbgð0fill·é
@@@¢¸êàlðZbg·é¤ª0fillµAQÆ¤Í0fillµ½àÌÆ©ÈµÜ·B


  OSÌ¾êÌIð
    OSLANG_SJIS c Shift-JISÌ¿R[hððß·é
    OSLANG_EUC  c EUCÌ¿R[hððß·é

    OSLINEBREAK_CR   c MacOS   "\r"
    OSLINEBREAK_LF   c Unix    "\n"
    OSLINEBREAK_CRLF c Windows "\r\n"

      ¦»ÝÍÈºÌ\[XR[hàÅÂÊÉÝèµÄ¢Ü·B
        (Windowsª APIÉæÁÄ \r\nÌêÆ\nÌêª éÌÅc)
        Ecommon/_memory.c
        Edebugsub.c
        Estatsave.c

    (milstr.hIðp)
    SUPPORT_ANK      c ANK¶ñìÖðN·é
    SUPPORT_SJIS     c SJIS¶ñìÖðN·é
    SUPPORT_EUC      c EUC¶ñìÖðN·é

      ¦»Ýmilstr.hÅ·×Äè`³ê½ÜÜÉÈÁÄ¢Ü·B
        ver0.73Åmilstr.hÌè`ðOµ compiler.hÅwèµ½¨ÆÈèÜ·B


@CPUCORE_IA32
@@IA32A[LeN`ðÌp
@@@i386cðgp·éêÌÓ_
@@  ECPU panic âx\¦É msgbox() Æ¢¤ API ðgpµÜ·B
@@@@compiler.h  ½èÅKÉè`µÄ­¾³¢B
@@@Esigsetjmp(3), siglongjmp(3) ª³¢A[LeN`ÍÈºÌ define ð
@@@@compiler.h  ½èÉÇÁµÄ­¾³¢B
@@@@----------------------------------------------------------------------
        #define sigjmp_buf              jmp_buf
        #define sigsetjmp(env, mask)    setjmp(env)
        #define siglongjmp(env, val)    longjmp(env, val)
@@@@----------------------------------------------------------------------

  CPUSTRUC_MEMWAIT
@@@cpucore\¢ÌÉEFCglðÚ®·é(vramop)

@SUPPORT_CRT15KHZ
@@@½¸15.98kHzðT|[g·é(DIPSW1-1)

@SUPPORT_CRT31KHZ
@@@½¸31.47kHzðT|[g·é
@@@Fellow^CvÍ±ê

@SUPPORT_PC9821
@@@PC-9821g£ÌT|[g
@@@RÅ·ª 386K{Å·B
@@@Ü½ SUPPORT_CRT31KHZàKvÅ·(nC]BIOSðgp·é×)

@SUPPORT_PC9861K
@@@PC-9861K(RS-232Cg£I/F)ðT|[g

@SUPPORT_IDEIO
@@@IDEÌ I/OxÅÌT|[g
@@@Åà ATAÌ[höxµ©Å«È¢c

@SUPPORT_SASI
@@@SASI HDDðT|[g
@@@è`ªÈ¯êÎíIDEÆµÄì®µÜ·B

@SUPPORT_SCSI
@@@SCSI HDDðT|[gcSR®©È¢

@SUPPORT_S98
@@@S98Oðæ¾

@SUPPORT_WAVEREC
@@SoundxÅ wavet@CÌ«oµÖðT|[g
@@Aµ«oµÍ TEhoÍª~ÜéÌÅ@ÙÚfoOp


// ---- screen

  PC-9801V[YÌæÊTCYÍWÅ 641x400B
  VGAÅÍûÜçÈ¢ÌÅ ­§IÉVGAÉûßé×É æÊ¡TCYÍ width + extend
Æ·éB
  8 < width < 640
  8 < height < 480
  extend = 0 or 1

typedef struct {
	BYTE	*ptr;		// VRAM|C^
	int		xalign;		// xûüItZbg
	int		yalign;		// yûüItZbg
	int		width;		// ¡
	int		height;		// c
	UINT	bpp;		// XN[Frbg
	int		extend;		// g£
} SCRNSURF;

  T[tFXTCYÍ (width + extern) x heightB


const SCRNSURF *scrnmng_surflock(void);
  æÊ`æJn

void scrnmng_surfunlock(const SCRNSURF *surf);
  æÊ`æI¹(±Ì^C~OÅ`æ)


void scrnmng_setwidth(int posx, int width)
void scrnmng_setextend(int extend)
void scrnmng_setheight(int posy, int height)
  `æTCYÌÏX
  EBhETCYÌÏX·é
  tXN[Å êÎ \¦ÌæðÏXB
  SCRNSURFÅÍ±ÌlðÔ·æ¤É·é
  posx, widthÍ 8Ì{

BOOL scrnmng_isfullscreen(void) c NP2RAÅÍ¢gp
  tXN[óÔÌæ¾
    return: ñ0ÅtXN[

BOOL scrnmng_haveextend(void)
  ¡óÔÌæ¾
    return: ñ0Å ¡g£T|[g

UINT scrnmng_getbpp(void)
  XN[FrbgÌæ¾
    return: rbg(8/16/24/32)

void scrnmng_palchanged(void)
  pbgXVÌÊm(8bitXN[T|[gÌÝ)

RGB16 scrnmng_makepal16(RGB32 pal32)
  RGB32©ç 16bitFðì¬·éB(16bitXN[T|[gÌÝ)



// ---- sound

NP2ÌTEhf[^Í sound.cÌÈºÌÖæèæ¾
  const SINT32 *sound_pcmlock(void)
  void sound_pcmunlock(const SINT32 *hdl)


SOUND_CRITICAL  Z}tHðüêé(see sndcsec.c)
SOUNDRESERVE    \ñobt@ÌTCY(~b)
  TEhðèÝ·éêÌwèB
  èÝÌÅåØÔðSOUNDRESERVEÅwèB
  (Win9xÌêA©OÅOobt@ð©£éÌÅ èÝ³µEwèÔÊèÉ
  TEhCgªéÌÅA±ÌÍsv¾Á½)


UINT soundmng_create(UINT rate, UINT ms)
  TEhXg[ÌmÛ
    input:  rate    TvO[g(11025/22050/44100)
            ms      TvOobt@TCY(~b)
    return: l¾µ½obt@ÌTvO

            msÉ]¤KvÍÈ¢(SDLÆ©obt@TCYªÀè³êéÌÅ)
            NP2ÌTEhobt@ìÍ ÔèlÌÝðpµÄ¢Ü·B


void soundmng_destroy(void)
  TEhXg[ÌI¹

void soundmng_reset(void)
  TEhXg[ÌZbg

void soundmng_play(void)
  TEhXg[ÌÄ¶

void soundmng_stop(void)
  TEhXg[Ìâ~

void soundmng_sync(void)
  TEhXg[ÌR[obN

void soundmng_setreverse(BOOL reverse)
  TEhXg[ÌoÍ½]Ýè
    input:  reverse ñ0Å¶E½]

BOOL soundmng_pcmplay(UINT num, BOOL loop)
  PCMÄ¶
    input:  num     PCMÔ
            loop    ñ0Å[v

void soundmng_pcmstop(UINT num)
  PCMâ~
    input:  num     PCMÔ



// ---- mouse

BYTE mousemng_getstat(SINT16 *x, SINT16 *y, int clear)
  }EXÌóÔæ¾
    input:  clear   ñ0Å óÔðæ¾ãÉJE^ðZbg·é
    output: *x      clear©çÌxûüJEg
            *y      clear©çÌyûüJEg
    return: bit7    ¶{^ÌóÔ (0:º)
            bit5    E{^ÌóÔ (0:º)



// ---- serial/parallel/midi

COMMNG commng_create(UINT device)
  VAI[v
    input:  foCXÔ
    return: nh (¸sNULL)


void commng_destroy(COMMNG hdl)
  VAN[Y
    input:  nh (¸sNULL)



// ---- joy stick

BYTE joymng_getstat(void)
  WCXeBbNÌóÔæ¾

    return: bit0    ã{^ÌóÔ (0:º)
            bit1    º{^ÌóÔ
            bit2    ¶{^ÌóÔ
            bit3    E{^ÌóÔ
            bit4    AË{^PÌóÔ
            bit5    AË{^QÌóÔ
            bit6    {^PÌóÔ
            bit7    {^QÌóÔ


// ----

void sysmng_update(UINT bitmap)
  óÔªÏ»µ½êÉR[³êéB

void sysmng_cpureset(void)
  ZbgÉR[³êé



void taskmng_exit(void)
  VXeðI¹·éB

