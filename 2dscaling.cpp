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

int c[]={30, 30, 30, 60, 60, 60, 60, 30,30,30};
int d[]={30*sx, 30*sy, 30*sx, 60*sy, 60*sx, 60*sy, 60*sx, 30*sy,30*sx,30*sy};
drawpoly(5,c);
outtextxy(30,70,"object");
drawpoly(5,d);
outtextxy(90,200,"scaled object");
getch();
return 0;
}
