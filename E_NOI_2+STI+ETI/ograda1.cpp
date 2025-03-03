#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

void RisOgr1 ( int x, int y, int w, int h );
void RisOgr2 (int w, int h, int x, int y, int x1, int y1, int x2, int y2);

void RisOgr1 ( int x, int y, int w, int h ){
	
	moveto(y, x); // V 
	lineto(y - w / 2, x + w); // D 
	moveto(y, x); // V 
	lineto(y + w / 2, x + w); // C  
	lineto(y + w / 2, x + h); // B 
	lineto(y - w / 2, x + h); // A 
	lineto(y - w / 2, x + w); // D 
	
	y += 60;
	
}

void RisOgr2 (int w, int h, int x1, int y1, int x2, int y2, int x , int y){
	rectangle(x1, y1, x2, y2);
	
	rectangle();
}

int main() {
	
	initwindow(800, 600);

	int w = 30;
	int h = 120;
	
	int x = w / 2;
	int y = h / 3;
	
	int x1 = y, x2 = ; 
	int x2 = , x2 = ;

	RisOgr1 (x, y, w, h);
	RisOgr2 (x, y, w, h);

	
	getch();
    closegraph();
    
    return 0;
	
}


