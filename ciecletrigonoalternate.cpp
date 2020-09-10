#include<iostream>
using namespace std;
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void trigocircle(float xc,float yc,int r)
{
double starta=0,enda=45,pi=3.14/180,x,y,angle=0;
x=xc+r*sin(angle);
y=yc+r*cos(angle);
while(starta<=360)
{
	angle=starta*pi;
	x=xc+r*sin(angle);
	y=yc+r*cos(angle);
	putpixel(x,y,WHITE);
	cout<<"\nstart a:"<<starta;
	starta=starta+0.05;
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
trigocircle(a,b,c);
getch();

}
