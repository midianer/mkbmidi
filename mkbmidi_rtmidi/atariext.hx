
/*
#define NAME 0
#define CLOSER 1
#define FULLER 2
#define MOVER 3
#define SIZER 4

#define M_OFF 0
#define M_ON  1
#define WF_FIRSTXYWH 1
#define WF_NEXTXYWH 2
#define WF_WORKXYWH 3
#define WF_CURRXYWH 4
#define WF_NAME     5
#define ARROW       6
#define WF_TOP      7

#define WM_REDRAW 1
#define WM_SIZED 2
#define WM_FULLED 3
#define WM_TOPPED 5



typedef struct OBJECT
{
   int ob_x;
   int ob_y;
   int ob_width;
   int ob_height;
   int g_x;
   int g_y;
   int g_w;
   int g_h;
};


extern void clipping( int a, int b, int c, int d, int e);
extern void vs_clip( int a, int b, int c[4] );
extern void spc_draw( int a, int b, int c);
extern void v_gtext( int a, int b, int c, char *d);
extern void graf_mouse( int a, int b );          // Maus aus.	
extern void wind_set( int a, int b, int c, int d, int e);  // Fenstername setzen. 
extern void wind_get( int a, int b, int *c, int *d, int *e, int *f);
extern void objc_draw( OBJECT *a, int b, int c, int d, int e, int f, int g); 
extern int  wind_create( int a,  int b, int c, int d, int e );
extern void form_alert( int a, char *b );
extern void wind_close( int w_handle );
extern void wind_delete( int w_handle );
extern void graf_growbox( int a, int b, int c, int d, int e, int f, int g, int h);
extern void wind_open( int a,  int b, int c, int d, int e );


typedef struct GRECT
{
   int g_x;
   int g_y;
   int g_w;
   int g_h;
};

*/
