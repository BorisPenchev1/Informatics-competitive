#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int x = 160, y = 300, midx, midy, i, xrL = 100, xrR = 100, yrT = 50, yrB = 50, r = 3, z;
int xr = xrL + xrR ;
int yr = yrT + yrB ;


int main(){
	
	initwindow(600,500);
	
	midx = getmaxx() / 2;
	midy = getmaxy() / 2;
	
	moveto(midx, midy);
	
	for (i = 0 ; i <= 10; i++){
		
		setfillstyle(z, i);
		
		moveto(300, 250);
		
		fillellipse ( x, y , xr, yr );
		
		xrL -= r ;
		xrR -= r ;
		yrT -= r ;
		yrB -= r ;
		xr = xrL + xrR;
		yr = yrT + yrB ;
		
		z++;
		if (z > 11){
			z = 1;
		}
		
	}

	getch();
	closegraph();
	
	
	return 0;
}
