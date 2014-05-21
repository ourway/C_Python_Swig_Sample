/* csample.h */

/* This is a sample C header file used to illustrate different Swig
   features.   The contents of this file have been chosen to highlight
   different Swig features.   Sadly, the actual functionality of this
   code is pretty useless. */


/* Here are some constants */

#define PI 3.1415926
enum Speed { LIGHT, RIDICULOUS, LUDICROUS };

/* Here is a global variable */

extern int Count;

/* Here are some simple C functions */

extern int add(int x, int y);
extern int sub(int x, int y);
extern int getCount();

/* Here is a C structure */

typedef struct Point {
  int x,y;
} Point;

/* Here are some functions that create/destroy a Point */

extern Point  *PointCreate(int x, int y);
extern void    PointDestroy(Point *p);

/* Here are some functions that manipulate points */

extern  void   PointDebug(Point *p);
extern void    PointPrint(Point *p, FILE *f);
extern double  PointDistance(Point *p, Point *q);
extern void    PointMove(Point *p, int dx, int dy, enum Speed spd);

/* Here is a trickier function */

extern char   *PointStr(Point *p, int *bufsize);

/* A structure with other structures nested inside */

typedef struct Rectangle {
  Point p1;
  Point p2;
} Rectangle;

extern void RectangleDebug(Rectangle *r);
extern void RectanglePrint(Rectangle *r, FILE *f);


