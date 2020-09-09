#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
using namespace std;
void points(int xc, int yc, int x, int y)
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
void poly(int xc, int yc, int r)
{
int x=0, y=r;
float z= (r/1.414);
while(x<=z)
{
y=sqrt((r*r)-(x*x));
points(xc,yc,x,y);
x++;
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

	poly(a,b,c);
	getch();
	}
