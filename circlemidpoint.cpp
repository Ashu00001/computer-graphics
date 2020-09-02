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
void midpointcircle(int xc,int yc,int r)
{
	int x=0,y=r;
	int p=(1-r);
	octantplot(xc,yc,x,y);
	while(x<y)
	{
		x++;
		if(p<0){
		
		p=p+2*x*1;
		
	}
		else
		{
			y--;
			p=p-2*y+2*x+1;
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

	midpointcircle(a,b,c);
	getch();
	}
