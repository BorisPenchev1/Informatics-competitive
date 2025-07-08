#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int main(){
	
	int i, x1 , x2, y1, y2 , d, r;
	
	
	
	initwindow(400,300);
	
	d = 15; r = 5;
	
	x1 = 10; y1 = 20; x2 = 40; y2 = y1 + d;
	
	for (i = 0 ; i <= 15; i++){
		
		setcolor(i);
		rectangle ( x1 , y1, x2, y2  );
		y1 = y2 + r;
		y2 = y1 + d;
	}

	getch();
	closegraph();
	
	return 0;
}
