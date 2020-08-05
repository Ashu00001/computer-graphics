#include<conio.h>
#include<graphics.h>
int main()
{
	int d=DETECT,m;
	initgraph(&d,&m,"");
	int arr[]={187,182,324,180,368,54,412,177,548,182,441,258,480,381,369,311,254,383,295,259,187,182};
	drawpoly(11,arr);

	getch();
	closegraph();
}
