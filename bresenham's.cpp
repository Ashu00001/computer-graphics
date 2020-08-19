#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
using namespace std;
int bres(int xa, int ya, int xb, int yb)
{
int dx, dy, p, x, y;
 
	dx=xb-xa;
	dy=yb-ya;
	x=xa;
	y=ya;
 
	p=2*dy-dx;
 
	while(x<xb)
	{
		if(p>=0)
		{
			
			y=y+1;
			p=p+2*dy-2*dx;
		}
		else
		{
			
			p=p+2*dy;
		}
		putpixel(x,y,WHITE);
		x=x+1;
	}
}

int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");

bres(100,100,150,300);
getch();
return 0;
}
