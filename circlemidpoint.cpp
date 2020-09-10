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
void midpointcircle(int xcenter,int ycenter,int radius)
{
	int xpresent=0,ypresent=radius;

	int pdec=(1-radius);
	octantplot(xcenter,ycenter,xpresent,ypresent);
	while(xpresent<ypresent)
	{
		xpresent++;
		if(pdec<0){
		
		pdec=pdec+2*xpresent*1;
		
	}
		else
		{
			ypresent--;
			pdec=pdec-2*ypresent+2*xpresent+1;
			}
		octantplot(xcenter,ycenter,xpresent,ypresent);	
		 
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
midpointcircle(a,b,c);
getch();

}
