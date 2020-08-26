#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
using namespace std;
int trans(int a[],int b[])
{
drawpoly(4,a);
drawpoly(4,b);
}

int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
int a[]={320, 150, 400, 250, 250, 350, 320, 150};
int tx=300, ty=50;
int b[]={320+tx, 150+ty, 400+tx, 250+ty, 250+tx, 350+ty, 320+tx, 150+ty};
drawpoly(4,a);
outtextxy(320,350,"object");
drawpoly(4,b);
outtextxy(600,380,"after translation object");

getch();
return 0;
}
