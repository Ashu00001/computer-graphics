#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
using namespace std;
void octantplot(int xcenter,int ycenter,int xpresent,int ypresent)
{
	putpixel(xcenter+xpresent,ycenter+ypresent,WHITE);
	putpixel(xcenter-xpresent,ycenter+ypresent,WHITE);
	putpixel(xcenter+xpresent,ycenter-ypresent,WHITE);
	putpixel(xcenter-xpresent,ycenter-ypresent,WHITE);
	putpixel(xcenter+ypresent,ycenter+xpresent,WHITE);
	putpixel(xcenter-ypresent,ycenter+xpresent,WHITE);
	putpixel(xcenter+ypresent,ycenter-xpresent,WHITE);
	putpixel(xcenter-ypresent,ycenter-xpresent,WHITE);
   }
void polynomialcircle(int xcenter,int ycenter,int radius)
{
int xpresent=0, ypresent=radius;
while(xpresent<=radius/1.414)
{
ypresent=sqrt((radius*radius)-(xpresent*xpresent));
octantplot(xcenter,ycenter,xpresent,ypresent);
xpresent++;
}
}


int main()
{
int gd=DETECT,gmode,a,b,c;
float T,r;
initgraph(&gd,&gmode,"");
cout<<"centre x coordinate ::";
cin>>a;
cout<<"centre y coordinate ::";
cin>>b;
cout<<"radius:";
cin>>c;
outtextxy(a-r/2,b+c+5,"CIRCLE");
polynomialcircle(a,b,c);
getch();

}
