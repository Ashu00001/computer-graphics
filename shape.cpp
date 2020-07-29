// C Implementation for drawing circle 
#include <graphics.h> 
#include<conio.h>
//driver code 
int main() 
{ 
printf("18BET1081");
int gd = DETECT,gm;
initgraph(&gd,&gm,"C: /TURBOC3/BGI");
//line
line(250,200,350,350);
//circle
circle(140,150,80);
//triangle
line(140,290,50,450);
line(140,290,230,450);
line(50,450,230,450);
//arc
arc(200,200,100,320,100);
//pixel
putpixel(100,200,3);
getch();
closegraph();
}
