#include<iostream>
#include <graphics.h>
using namespace std;

int x1, y1, x2, y2, x3, y3, cv, x4, y4, x5, y5;

int main() {

    initwindow(800, 600);

	x1=50;  y1=100;
	x2=250; y2=100;
	x3=150; y3=30;
	cv=15;
	
	
	x4=50; y4=300;
	x5=250; y5=300;
						
	setcolor(cv);
				
	moveto(x1,y1);		
	lineto(x2,y2);			
	lineto(x3,y3);
	lineto(x1,y1);
	
	setfillstyle(1,4);		
	floodfill((x1+x2)/2, (y1+y3)/2, 15); 

	lineto(x4, y4);
	lineto(x5, y5);
	lineto(x2, y2);
	
	floodfill((x1+x5)/2, (y1+y5)/2, 15); 	
			
	
    getch();
    closegraph();
    return 0;
}

