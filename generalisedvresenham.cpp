#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
using namespace std;
int sign(int x)
{
if(x>0)
return 1;
else if(x<0)
return -1;
else
return 0;
}
int bres(int xa, int ya, int xb, int yb)
{
int s1,s2,n=1,sw=0,x=xa,y=ya,k,t,p;
int dy,dx;
dx=abs(xb-xa);
dy=abs(yb-ya);
s1=sign(xb-xa);
s2=sign(yb-ya);
if(dy>dx)
{
t=dx;
dx=dy;
dy=t;
sw=1;
}
else
{
sw=0;
}

p=2*dy-dx;
putpixel(x,y,WHITE);

while(n<=dx)
{
if(p>=0)
		{
			x=x+s1;
			y=y+s2;
			p=p+2*dy-2*dx;
		}
		else
		{
			if(sw=1)
			{
				y=y+s2;
			}
			else
			{
			x=x+s1;
			}
			p=p+2*dy;
		}
		putpixel(x,y,WHITE);
		n=n+1;
}
}

int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");

bres(100,100,200,300);
getch();
return 0;
}
