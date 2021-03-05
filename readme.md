Build of PC-9800 emulator Neko 21/W 0.86 that compiles and runs under linux 

- https://simk98.github.io/np21w/index.html

Instructions
------------

```sh
$ cd x11
$ ./configure 
$ make 

```

// ---- ﾂ津ｨﾂ義



  ﾂ催ﾂ適ﾂ可ｻﾂづ個暗猟づ個δﾂδつδ環使ﾂ用ﾂ療環づ個抑ﾂ青ｧ

    MEMOPTIMIZE = 0ﾂ〜2



    CPUﾂづ可づｦﾂづｨﾂ暗按可ｺﾂづ個青板値ﾂづｰﾂセﾂッﾂトﾂつｳﾂづｪﾂづｩﾂつｱﾂづﾂづｰﾂ甘ｺﾂ妥陳つｵﾂづﾂつ｢ﾂづｩ

      MEMOPTIMIZEﾂ鳴｢ﾂ津ｨﾂ義 ﾂ… Celeron333Aﾂ暗按降ﾂづ個セﾂカﾂδ督ドﾂキﾂδδッﾂシﾂδﾂ有ﾂ古ｸﾂ機

      MEMOPTIMIZE = 0   ﾂ… x86

      MEMOPTIMIZE = 1   ﾂ… PowerPCﾂ督卍づ個デﾂスﾂクﾂトﾂッﾂプﾂ用RISC

      MEMOPTIMIZE = 2   ﾂ… StrongARMﾂ督卍づ個組ﾂづ敖債楪づ敖用RISC





  ﾂコﾂδ督パﾂイﾂδ可づ個暗ｸﾂつｫﾂ青板・ﾂ姪淞づｨﾂ値ﾂづ個催ﾂ適ﾂ可ｻ

    ﾂ暗ｸﾂつｫﾂ青板・ﾂ姪淞づｨﾂ値ﾂづintﾂ型ﾂ暗按外ﾂづｰﾂ指ﾂ津ｨﾂつｵﾂつｽﾂ湘ｪﾂ債ﾂづ可、ﾂ催ﾂ適ﾂ可ｻﾂつｪﾂ有ﾂ古ｸﾂづ可督ｭﾂつｩﾂづ按つ｢

    ﾂコﾂδ督パﾂイﾂδ可古ｼﾂつｯﾂづ個津ｨﾂ義ﾂづﾂつｷﾂ。

    ﾂ津環湘ｭﾂづ common.h ﾂづ個閉ｨﾂづｰﾂ使ﾂ用ﾂつｵﾂづ慊つｷﾂ。

      REG8 ﾂ… UINT8ﾂ型 / (sizeof(REG8) != 1)ﾂづ個湘ｪﾂ債 ﾂ湘｣ﾂ暗環ビﾂッﾂトﾂづｰ0fillﾂつｷﾂづｩﾂ篠

      REG16 ﾂ… UINT16ﾂ型 / (sizeof(REG16) != 2)ﾂづ個湘ｪﾂ債 ﾂ湘｣ﾂ暗環ビﾂッﾂトﾂづｰ0fillﾂつｷﾂづｩﾂ篠

ﾂ　ﾂ　ﾂ　ﾂつ｢ﾂつｸﾂづｪﾂづﾂ値ﾂづｰﾂセﾂッﾂトﾂつｷﾂづｩﾂ堕､ﾂつｪ0fillﾂつｵﾂ、ﾂ参ﾂ湘ﾂ堕､ﾂづ0fillﾂつｵﾂつｽﾂづﾂづ個づﾂ個ｩﾂづ按つｵﾂづ慊つｷﾂ。





  OSﾂづ個個ｾﾂ古ｪﾂづ個選ﾂ妥ｰ

    OSLANG_SJIS ﾂ… Shift-JISﾂづ個環ｿﾂ篠堋コﾂーﾂドﾂづｰﾂ嘉ｰﾂ偲淞つｷﾂづｩ

    OSLANG_EUC  ﾂ… EUCﾂづ個環ｿﾂ篠堋コﾂーﾂドﾂづｰﾂ嘉ｰﾂ偲淞つｷﾂづｩ



    OSLINEBREAK_CR   ﾂ… MacOS   "\r"

    OSLINEBREAK_LF   ﾂ… Unix    "\n"

    OSLINEBREAK_CRLF ﾂ… Windows "\r\n"



      ﾂﾂｦﾂ個ｻﾂ催敖づ債暗按可ｺﾂづ個ソﾂーﾂスﾂコﾂーﾂドﾂ禿ﾂづﾂ古つ陛環づ可静敖津ｨﾂつｵﾂづﾂつ｢ﾂづ慊つｷﾂ。

        (Windowsﾂつｪ APIﾂづ可づｦﾂづﾂづ \r\nﾂづ個湘ｪﾂ債ﾂづ\nﾂづ個湘ｪﾂ債ﾂつｪﾂつﾂづｩﾂづ個づﾂ…)

        ﾂ・common/_memory.c

        ﾂ・debugsub.c

        ﾂ・statsave.c



    (milstr.hﾂ選ﾂ妥ｰﾂ用)

    SUPPORT_ANK      ﾂ… ANKﾂ閉ｶﾂ篠堋療ｱﾂ堕ﾂ催ｬﾂ甘鳴青板づｰﾂδ環δ督クﾂつｷﾂづｩ

    SUPPORT_SJIS     ﾂ… SJISﾂ閉ｶﾂ篠堋療ｱﾂ堕ﾂ催ｬﾂ甘鳴青板づｰﾂδ環δ督クﾂつｷﾂづｩ

    SUPPORT_EUC      ﾂ… EUCﾂ閉ｶﾂ篠堋療ｱﾂ堕ﾂ催ｬﾂ甘鳴青板づｰﾂδ環δ督クﾂつｷﾂづｩ



      ﾂﾂｦﾂ個ｻﾂ催拯ilstr.hﾂづﾂつｷﾂづ猟づﾂ津ｨﾂ義ﾂつｳﾂづｪﾂつｽﾂづ慊づ慊づ可づ按づﾂづﾂつ｢ﾂづ慊つｷﾂ。

        ver0.73ﾂづmilstr.hﾂづ個津ｨﾂ義ﾂづｰﾂ外ﾂつｵ compiler.hﾂづﾂ指ﾂ津ｨﾂつｵﾂつｽﾂ閉ｨﾂづﾂづ按づｨﾂづ慊つｷﾂ。





ﾂ　CPUCORE_IA32

ﾂ　ﾂ　IA32ﾂアﾂーﾂキﾂテﾂクﾂチﾂδδづｰﾂ催個用

ﾂ　ﾂ　ﾂ　i386cﾂづｰﾂ使ﾂ用ﾂつｷﾂづｩﾂ湘ｪﾂ債ﾂづ個陳債暗督点

ﾂ　ﾂ　  ﾂ・CPU panic ﾂづ｢ﾂ警ﾂ債青表ﾂ篠ｦﾂ篠楪づ msgbox() ﾂづﾂつ｢ﾂつ､ API ﾂづｰﾂ使ﾂ用ﾂつｵﾂづ慊つｷﾂ。

ﾂ　ﾂ　ﾂ　ﾂ　compiler.h ﾂつﾂつｽﾂづｨﾂづﾂ適ﾂ督鳴づ可津ｨﾂ義ﾂつｵﾂづﾂつｭﾂつｾﾂつｳﾂつ｢ﾂ。

ﾂ　ﾂ　ﾂ　ﾂ・sigsetjmp(3), siglongjmp(3) ﾂつｪﾂ鳴ｳﾂつ｢ﾂアﾂーﾂキﾂテﾂクﾂチﾂδδづ債暗按可ｺﾂづ define ﾂづｰ

ﾂ　ﾂ　ﾂ　ﾂ　compiler.h ﾂつﾂつｽﾂづｨﾂづ可津ﾂ嘉ﾂつｵﾂづﾂつｭﾂつｾﾂつｳﾂつ｢ﾂ。

ﾂ　ﾂ　ﾂ　ﾂ　----------------------------------------------------------------------

        #define sigjmp_buf              jmp_buf

        #define sigsetjmp(env, mask)    setjmp(env)

        #define siglongjmp(env, val)    longjmp(env, val)

ﾂ　ﾂ　ﾂ　ﾂ　----------------------------------------------------------------------



  CPUSTRUC_MEMWAIT

ﾂ　ﾂ　ﾂ　cpucoreﾂ構ﾂ堕｢ﾂ妥個づ可δﾂδつδ環ウﾂェﾂイﾂトﾂ値ﾂづｰﾂ暗堋督ｮﾂつｷﾂづｩ(vramop)



ﾂ　SUPPORT_CRT15KHZ

ﾂ　ﾂ　ﾂ　ﾂ青ﾂ閉ｽﾂ堕鳴債ｸ15.98kHzﾂづｰﾂサﾂポﾂーﾂトﾂつｷﾂづｩ(DIPSW1-1)



ﾂ　SUPPORT_CRT31KHZ

ﾂ　ﾂ　ﾂ　ﾂ青ﾂ閉ｽﾂ堕鳴債ｸ31.47kHzﾂづｰﾂサﾂポﾂーﾂトﾂつｷﾂづｩ

ﾂ　ﾂ　ﾂ　Fellowﾂタﾂイﾂプﾂづ債つｱﾂづｪ



ﾂ　SUPPORT_PC9821

ﾂ　ﾂ　ﾂ　PC-9821ﾂ拡ﾂ陳｣ﾂづ個サﾂポﾂーﾂト

ﾂ　ﾂ　ﾂ　ﾂ督鳴然ﾂづﾂつｷﾂつｪ 386ﾂ必ﾂ須ﾂづﾂつｷﾂ。

ﾂ　ﾂ　ﾂ　ﾂづ慊つｽ SUPPORT_CRT31KHZﾂづﾂ必ﾂ要ﾂづﾂつｷ(ﾂハﾂイﾂδ個ゾBIOSﾂづｰﾂ使ﾂ用ﾂつｷﾂづｩﾂ暗)



ﾂ　SUPPORT_PC9861K

ﾂ　ﾂ　ﾂ　PC-9861K(RS-232Cﾂ拡ﾂ陳｣I/F)ﾂづｰﾂサﾂポﾂーﾂト



ﾂ　SUPPORT_IDEIO

ﾂ　ﾂ　ﾂ　IDEﾂづ I/Oﾂδ個ベﾂδ仰づﾂづ個サﾂポﾂーﾂト

ﾂ　ﾂ　ﾂ　ﾂづﾂづ ATAﾂづ個δ環ーﾂドﾂ津ｶﾂ度ﾂつｵﾂつｩﾂづﾂつｫﾂづ按つ｢ﾂ…



ﾂ　SUPPORT_SASI

ﾂ　ﾂ　ﾂ　SASI HDDﾂづｰﾂサﾂポﾂーﾂト

ﾂ　ﾂ　ﾂ　ﾂ津ｨﾂ義ﾂつｪﾂづ按つｯﾂづｪﾂづ篠湘ｭﾂ篠曵DEﾂづﾂつｵﾂづﾂ催ｬﾂ督ｮﾂつｵﾂづ慊つｷﾂ。



ﾂ　SUPPORT_SCSI

ﾂ　ﾂ　ﾂ　SCSI HDDﾂづｰﾂサﾂポﾂーﾂトﾂ…ﾂ全ﾂ然ﾂ督ｮﾂつｩﾂづ按つ｢



ﾂ　SUPPORT_S98

ﾂ　ﾂ　ﾂ　S98ﾂδ債グﾂづｰﾂ偲ｦﾂ督ｾ



ﾂ　SUPPORT_WAVEREC

ﾂ　ﾂ　Soundﾂδ個ベﾂδ仰づ waveﾂフﾂァﾂイﾂδ仰づ個渉堕つｫﾂ出ﾂつｵﾂ甘鳴青板づｰﾂサﾂポﾂーﾂト

ﾂ　ﾂ　ﾂ但ﾂつｵﾂ渉堕つｫﾂ出ﾂつｵﾂ陳ﾂづ ﾂサﾂウﾂδ督ドﾂ出ﾂ療債つｪﾂ止ﾂづ慊づｩﾂづ個づﾂ　ﾂづ卍づ堋デﾂバﾂグﾂ用





// ---- screen



  PC-9801ﾂシﾂδ環ーﾂズﾂづ個嘉ｦﾂ姪環サﾂイﾂズﾂづ債標ﾂ渉ﾂづ 641x400ﾂ。

  VGAﾂづﾂづ債偲ｻﾂづ慊づｧﾂづ按つ｢ﾂづ個づ ﾂ仰ｭﾂ青ｧﾂ的ﾂづ鰻GAﾂづ可偲ｻﾂづ淞づｩﾂ暗猟づ ﾂ嘉ｦﾂ姪環可｡ﾂサﾂイﾂズﾂづ width + extend

ﾂづﾂつｷﾂづｩﾂ。

  8 < width < 640

  8 < height < 480

  extend = 0 or 1



typedef struct {

	BYTE	*ptr;		// VRAMﾂポﾂイﾂδ督タ

	int		xalign;		// xﾂ陛ｻﾂ古ｼﾂオﾂフﾂセﾂッﾂト

	int		yalign;		// yﾂ陛ｻﾂ古ｼﾂオﾂフﾂセﾂッﾂト

	int		width;		// ﾂ可｡ﾂ閉

	int		height;		// ﾂ縦ﾂ閉

	UINT	bpp;		// ﾂスﾂクﾂδ環ーﾂδ督色ﾂビﾂッﾂト

	int		extend;		// ﾂ閉敖拡ﾂ陳｣

} SCRNSURF;



  ﾂサﾂーﾂフﾂェﾂスﾂサﾂイﾂズﾂづ (width + extern) x heightﾂ。





const SCRNSURF *scrnmng_surflock(void);

  ﾂ嘉ｦﾂ姪環描ﾂ嘉ｦﾂ開ﾂ始



void scrnmng_surfunlock(const SCRNSURF *surf);

  ﾂ嘉ｦﾂ姪環描ﾂ嘉ｦﾂ終ﾂ猟ｹ(ﾂつｱﾂづ個タﾂイﾂミﾂδ督グﾂづﾂ描ﾂ嘉ｦ)





void scrnmng_setwidth(int posx, int width)

void scrnmng_setextend(int extend)

void scrnmng_setheight(int posy, int height)

  ﾂ描ﾂ嘉ｦﾂサﾂイﾂズﾂづ個陛渉更

  ﾂウﾂィﾂδ督ドﾂウﾂサﾂイﾂズﾂづ個陛渉更ﾂつｷﾂづｩ

  ﾂフﾂδ仰スﾂクﾂδ環ーﾂδ督陳ﾂづﾂつﾂづｪﾂづ ﾂ表ﾂ篠ｦﾂ療個暗ｦﾂづｰﾂ陛渉更ﾂ。

  SCRNSURFﾂづﾂづ債つｱﾂづ個値ﾂづｰﾂ陛板つｷﾂづｦﾂつ､ﾂづ可つｷﾂづｩ

  posx, widthﾂづ 8ﾂづ個倍ﾂ青



BOOL scrnmng_isfullscreen(void) ﾂ… NP2ﾂコﾂアﾂづﾂづ債鳴｢ﾂ使ﾂ用

  ﾂフﾂδ仰スﾂクﾂδ環ーﾂδ督湘ｳﾂ妥板づ個偲ｦﾂ督ｾ

    return: ﾂ氾ｱ0ﾂづﾂフﾂδ仰スﾂクﾂδ環ーﾂδ



BOOL scrnmng_haveextend(void)

  ﾂ可｡ﾂ閉敖湘ｳﾂ妥板づ個偲ｦﾂ督ｾ

    return: ﾂ氾ｱ0ﾂづ ﾂ可｡ﾂ閉敖拡ﾂ陳｣ﾂサﾂポﾂーﾂト



UINT scrnmng_getbpp(void)

  ﾂスﾂクﾂδ環ーﾂδ督色ﾂビﾂッﾂトﾂ青板づ個偲ｦﾂ督ｾ

    return: ﾂビﾂッﾂトﾂ青(8/16/24/32)



void scrnmng_palchanged(void)

  ﾂパﾂδ個ッﾂトﾂ更ﾂ新ﾂづ個津環知(8bitﾂスﾂクﾂδ環ーﾂδ督サﾂポﾂーﾂトﾂ篠楪づ個づ)



RGB16 scrnmng_makepal16(RGB32 pal32)

  RGB32ﾂつｩﾂづｧ 16bitﾂ色ﾂづｰﾂ催ｬﾂ青ｬﾂつｷﾂづｩﾂ。(16bitﾂスﾂクﾂδ環ーﾂδ督サﾂポﾂーﾂトﾂ篠楪づ個づ)







// ---- sound



NP2ﾂづ個サﾂウﾂδ督ドﾂデﾂーﾂタﾂづ sound.cﾂづ個暗按可ｺﾂづ個甘鳴青板づｦﾂづｨﾂ偲ｦﾂ督ｾ

  const SINT32 *sound_pcmlock(void)

  void sound_pcmunlock(const SINT32 *hdl)





SOUND_CRITICAL  ﾂセﾂマﾂフﾂォﾂづｰﾂ禿ｼﾂづｪﾂづｩ(see sndcsec.c)

SOUNDRESERVE    ﾂ予ﾂ姪ｱﾂバﾂッﾂフﾂァﾂづ個サﾂイﾂズ(ﾂミﾂδ環秒)

  ﾂサﾂウﾂδ督ドﾂづｰﾂ環ﾂづｨﾂ債楪づ敖渉按猟敖つｷﾂづｩﾂ湘ｪﾂ債ﾂづ個指ﾂ津ｨﾂ。

  ﾂ環ﾂづｨﾂ債楪づ敖づ個催ﾂ妥･ﾂ可ﾂ妥伉篠楪甘板づｰSOUNDRESERVEﾂづﾂ指ﾂ津ｨﾂ。

  (Win9xﾂづ個湘ｪﾂ債ﾂ、ﾂ篠ｩﾂ前ﾂづﾂδ環δ督グﾂバﾂッﾂフﾂァﾂづｰﾂ個ｩﾂ陳｣ﾂづｩﾂづ個づ ﾂ環ﾂづｨﾂ債楪づ敖鳴ｳﾂつｵﾂ・ﾂ指ﾂ津ｨﾂ篠楪甘板津環づｨﾂづ

  ﾂサﾂウﾂδ督ドﾂδ可イﾂトﾂつｪﾂ猟按づｩﾂづ個づﾂ、ﾂつｱﾂづ個渉按猟敖づ債不ﾂ要ﾂつｾﾂづﾂつｽ)





UINT soundmng_create(UINT rate, UINT ms)

  ﾂサﾂウﾂδ督ドﾂスﾂトﾂδ環ーﾂδﾂづ個確ﾂ陛

    input:  rate    ﾂサﾂδ督プﾂδ環δ督グﾂδ個ーﾂト(11025/22050/44100)

            ms      ﾂサﾂδ督プﾂδ環δ督グﾂバﾂッﾂフﾂァﾂサﾂイﾂズ(ﾂミﾂδ環秒)

    return: ﾂ獲ﾂ督ｾﾂつｵﾂつｽﾂバﾂッﾂフﾂァﾂづ個サﾂδ督プﾂδ環δ督グﾂ青



            msﾂづ可従ﾂつ､ﾂ必ﾂ要ﾂづ債づ按つ｢(SDLﾂづﾂつｩﾂバﾂッﾂフﾂァﾂサﾂイﾂズﾂつｪﾂ古ﾂ津ｨﾂつｳﾂづｪﾂづｩﾂづ個づ)

            NP2ﾂづ個サﾂウﾂδ督ドﾂバﾂッﾂフﾂァﾂ堕ﾂ催ｬﾂづ ﾂ陛板づｨﾂ値ﾂづ個づ敖づｰﾂ猟伉用ﾂつｵﾂづﾂつ｢ﾂづ慊つｷﾂ。





void soundmng_destroy(void)

  ﾂサﾂウﾂδ督ドﾂスﾂトﾂδ環ーﾂδﾂづ個終ﾂ猟ｹ



void soundmng_reset(void)

  ﾂサﾂウﾂδ督ドﾂスﾂトﾂδ環ーﾂδﾂづ個δ環セﾂッﾂト



void soundmng_play(void)

  ﾂサﾂウﾂδ督ドﾂスﾂトﾂδ環ーﾂδﾂづ個催ﾂ青ｶ



void soundmng_stop(void)

  ﾂサﾂウﾂδ督ドﾂスﾂトﾂδ環ーﾂδﾂづ個津｢ﾂ止



void soundmng_sync(void)

  ﾂサﾂウﾂδ督ドﾂスﾂトﾂδ環ーﾂδﾂづ個コﾂーﾂδ仰バﾂッﾂク



void soundmng_setreverse(BOOL reverse)

  ﾂサﾂウﾂδ督ドﾂスﾂトﾂδ環ーﾂδﾂづ個出ﾂ療債板ｽﾂ転ﾂ静敖津ｨ

    input:  reverse ﾂ氾ｱ0ﾂづﾂ債ｶﾂ右ﾂ板ｽﾂ転



BOOL soundmng_pcmplay(UINT num, BOOL loop)

  PCMﾂ催ﾂ青ｶ

    input:  num     PCMﾂ氾板債

            loop    ﾂ氾ｱ0ﾂづﾂδ仰ーﾂプ



void soundmng_pcmstop(UINT num)

  PCMﾂ津｢ﾂ止

    input:  num     PCMﾂ氾板債







// ---- mouse



BYTE mousemng_getstat(SINT16 *x, SINT16 *y, int clear)

  ﾂマﾂウﾂスﾂづ個湘ｳﾂ妥板偲ｦﾂ督ｾ

    input:  clear   ﾂ氾ｱ0ﾂづ ﾂ湘ｳﾂ妥板づｰﾂ偲ｦﾂ督ｾﾂ古｣ﾂづ可カﾂウﾂδ督タﾂづｰﾂδ環セﾂッﾂトﾂつｷﾂづｩ

    output: *x      clearﾂつｩﾂづｧﾂづ警ﾂ陛ｻﾂ古ｼﾂカﾂウﾂδ督ト

            *y      clearﾂつｩﾂづｧﾂづ軽ﾂ陛ｻﾂ古ｼﾂカﾂウﾂδ督ト

    return: bit7    ﾂ債ｶﾂボﾂタﾂδ督づ個湘ｳﾂ妥 (0:ﾂ可淞可ｺ)

            bit5    ﾂ右ﾂボﾂタﾂδ督づ個湘ｳﾂ妥 (0:ﾂ可淞可ｺ)







// ---- serial/parallel/midi



COMMNG commng_create(UINT device)

  ﾂシﾂδ環アﾂδ仰オﾂーﾂプﾂδ

    input:  ﾂデﾂバﾂイﾂスﾂ氾板債

    return: ﾂハﾂδ督ドﾂδ (ﾂ篠ｸﾂ敗ﾂ篠朦ULL)





void commng_destroy(COMMNG hdl)

  ﾂシﾂδ環アﾂδ仰クﾂδ債ーﾂズ

    input:  ﾂハﾂδ督ドﾂδ (ﾂ篠ｸﾂ敗ﾂ篠朦ULL)







// ---- joy stick



BYTE joymng_getstat(void)

  ﾂジﾂδﾂイﾂスﾂテﾂィﾂッﾂクﾂづ個湘ｳﾂ妥板偲ｦﾂ督ｾ



    return: bit0    ﾂ湘｣ﾂボﾂタﾂδ督づ個湘ｳﾂ妥 (0:ﾂ可淞可ｺ)

            bit1    ﾂ可ｺﾂボﾂタﾂδ督づ個湘ｳﾂ妥

            bit2    ﾂ債ｶﾂボﾂタﾂδ督づ個湘ｳﾂ妥

            bit3    ﾂ右ﾂボﾂタﾂδ督づ個湘ｳﾂ妥

            bit4    ﾂ連ﾂ偲仰ボﾂタﾂδ督１ﾂづ個湘ｳﾂ妥

            bit5    ﾂ連ﾂ偲仰ボﾂタﾂδ督２ﾂづ個湘ｳﾂ妥

            bit6    ﾂボﾂタﾂδ督１ﾂづ個湘ｳﾂ妥

            bit7    ﾂボﾂタﾂδ督２ﾂづ個湘ｳﾂ妥





// ----



void sysmng_update(UINT bitmap)

  ﾂ湘ｳﾂ妥板つｪﾂ陛渉可ｻﾂつｵﾂつｽﾂ湘ｪﾂ債ﾂづ可コﾂーﾂδ仰つｳﾂづｪﾂづｩﾂ。



void sysmng_cpureset(void)

  ﾂδ環セﾂッﾂトﾂ篠楪づ可コﾂーﾂδ仰つｳﾂづｪﾂづｩ







void taskmng_exit(void)

  ﾂシﾂスﾂテﾂδﾂづｰﾂ終ﾂ猟ｹﾂつｷﾂづｩﾂ。



