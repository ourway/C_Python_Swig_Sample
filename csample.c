#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include "csample.h"

int Count; 

int add(int x, int y) {
  return x+y;
}

int sub(int x, int y) {
  return x-y;
}

int getCount() {
  return Count;
}

Point *PointCreate(int x, int y) {
  Point *p;
  p = (Point *) malloc(sizeof(Point));
  p->x = x;
  p->y = y;
  return p;
}

void PointDestroy(Point *p) {
  free(p);
}

void PointDebug(Point *p) {
  PointPrint(p,stdout);
}

void PointPrint(Point *p, FILE *f) {
  fprintf(f,"Point(%d,%d)\n", p->x, p->y);
}

double PointDistance(Point *p, Point *q) {
  int dx;
  int dy;
  dx = p->x - q->x;
  dy = p->x - q->y;
  return sqrt(dx*dx+dy*dy);
}

void PointMove(Point *p, int dx, int dy, enum Speed spd) {
  printf("Moving Point(%d,%d) -> Point(%d,%d)\n", p->x,p->y,p->x+dx,p->y+dy);
  printf("Speed = %d\n", spd);
}

char *PointStr(Point *p, int *bufsize) {
  char *result = (char *) malloc(64);
  sprintf(result,"Point(%d,%d)", p->x,p->y);
  *bufsize = 64;
  return result;
}

void RectanglePrint(Rectangle *r, FILE *f) {
  fprintf(f,"Rectangle((%d,%d),(%d,%d))\n", r->p1.x,r->p1.y,
	  r->p2.x,r->p2.y);
}

void RectangleDebug(Rectangle *r) {
  RectanglePrint(r,stdout);
}
