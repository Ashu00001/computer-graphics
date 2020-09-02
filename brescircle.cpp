#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
using namespace std;
void octantplot(int xc,int yc,int x,int y)
{
	putpixel(xc+x,yc+y,15);
	putpixel(xc-x,yc+y,15);
	putpixel(xc+x,yc-y,15);
	putpixel(xc-x,yc-y,15);
	putpixel(xc+y,yc+x,15);
	putpixel(xc-y,yc+x,15);
	putpixel(xc+y,yc-x,15);
	putpixel(xc-y,yc-x,15);
   }
void brescircle(int xc,int yc,int r)
{
	int x=0,y=r;
	int d=3-(2*r);
	octantplot(xc,yc,x,y);
	while(x<=y)
	{
	x++;
	if(d<0)
	{
		d=d+4*x+6;	}
	else{
		y--;
		d=d+4*(x-y)+10;

	}
	octantplot(xc,yc,x,y);
	}

}
int main()
{
	int gd=DETECT,gm,a,b,c;

initgraph(&gd,&gm," ");
	cout<<"Enter centre coordinates"<<endl;
	cout<<"x: ";
	cin>>a;
	cout<<"y: ";
	cin>>b;
	cout<<"enter radius: ";
	cin>>c;

	brescircle(a,b,c);
	getch();
	}
