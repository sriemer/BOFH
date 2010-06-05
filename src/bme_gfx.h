#ifndef BME_GFX_H
#define BME_GFX_H

// BME graphics module header file

int gfx_init(unsigned xsize, unsigned ysize, unsigned framerate, unsigned flags);
int gfx_reinit(void);
void gfx_uninit(void);
void gfx_updatepage(void);
void gfx_blitwindow(void);
void gfx_wipepages(void);
void gfx_setclipregion(unsigned left, unsigned top, unsigned right, unsigned bottom);
void gfx_setmaxspritefiles(int num);
void gfx_setmaxcolors(int num);
int gfx_loadpalette(char *name);
void gfx_calcpalette(int fade, int radd, int gadd, int badd);
void gfx_setpalette(void);
int gfx_loadblocks(char *name);
int gfx_loadsprites(int num, char *name);
void gfx_freesprites(int num);

void gfx_drawblock(int x, int y, unsigned num);
void gfx_drawsprite(int x, int y, unsigned num);
void gfx_drawspritec(int x, int y, unsigned num, int color);
void gfx_drawspritex(int x, int y, unsigned num, Uint8 *xlattable);
void gfx_getspriteinfo(unsigned num);
void gfx_fillscreen(char color);
void gfx_plot(int x, int y, char color);
void gfx_line(int x1, int y1, int x2, int y2, int color);

extern int gfx_initted;
extern int gfx_scanlinemode;
extern int gfx_preventswitch;
extern int gfx_fullscreen;
extern unsigned gfx_windowxsize;
extern unsigned gfx_windowysize;
extern unsigned gfx_virtualxsize;
extern unsigned gfx_virtualysize;
extern unsigned gfx_nblocks;
extern int gfx_blockxsize;
extern int gfx_blockysize;
extern int spr_xsize;
extern int spr_ysize;
extern int spr_xhotspot;
extern int spr_yhotspot;
extern Uint8 *gfx_vscreen;
extern Uint8 *gfx_blocks;
extern Uint8 gfx_palette[];
extern BLOCKHEADER *gfx_blockheaders;

#endif