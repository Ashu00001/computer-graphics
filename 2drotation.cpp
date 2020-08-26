#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
using namespace std;
int main()
{
int d=DETECT,m,X0,X1,Y0,Y1,X2,Y2;
float a;
initgraph(&d,&m,"");
cout<<"Enter X1,Y1 :";
cin>>X0>>Y0;
cout<<"Enter X2,Y2 :";
cin>>X1>>Y1;
cout<<"Enter X3,Y3 :";
cin>>X2>>Y2;
cout<<"Enter Theta :";
cin>>a;
a=a*(3.142/180);
float rx1,ry1,rx2,ry2,rx3,ry3;
rx1=X0*cos(a)-Y0*sin(a);
ry1=Y0*cos(a)+X0*sin(a);
rx2=X1*cos(a)-Y1*sin(a);
ry2=Y1*cos(a)+X1*sin(a);
rx3=X2*cos(a)-Y2*sin(a);
ry3=Y2*cos(a)+X2*sin(a);
int p[]={X0,Y0,X1,Y1,X2,Y2,X0,Y0};
int q[]={rx1,ry1,rx2,ry2,rx3,ry3,rx1,ry1};
drawpoly(4,p);
drawpoly(4,q);
getch();
}
