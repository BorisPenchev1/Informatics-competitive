#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int main(){
	
	int i, x1 , x2, y1, y2 , d, r, z = 1;
	
	
	
	initwindow(700,600);
	
	d = 15; r = 5;
	
	x1 = 10; y1 = 20; x2 = 40; y2 = y1 + d;
	
	for (i = 0 ; i <= 15; i++){
		
		setfillstyle(z, i);
		bar ( x1 , y1, x2, y2  );
		y1 = y2 + r;
		y2 = y1 + d;
		
		z++;
		if (z > 11){
			z = 1;
		}
		
	}

	getch();
	closegraph();
	
	return 0;
}
