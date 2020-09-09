#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
using namespace std;
void circlepolarco(float xc,float yc,float r)
{
float T =0,Tend =45,Tinc = 1/r,angle=0,x,y,t=3.14/180;
    x=xc+r*cos(angle);
	y=yc+r*sin(angle);
while(angle<=45)
{
	x=r*cos(angle);
	y=r*sin(angle);
putpixel(xc+x,yc+y,WHITE);
	putpixel(xc-x,yc+y,WHITE);
	putpixel(xc+x,yc-y,WHITE);
	putpixel(xc-x,yc-y,WHITE);
	putpixel(xc+y,yc+x,WHITE);
	putpixel(xc-y,yc+x,WHITE);
	putpixel(xc+y,yc-x,WHITE);
	putpixel(xc-y,yc-x,WHITE);
	angle=angle+Tinc;
	delay(90);
	}
}

int main()
{
	int gd=DETECT,gm,a,b,c;

initgraph(&gd,&gm," ");
cout<<"enter coordinates"<<endl;
	cout<<"X: ";
	cin>>a;
	cout<<"y: ";
	cin>>b;
	cout<<"enter radius ";
	cin>>c;

	circlepolarco(a,b,c);
	getch();
	}
