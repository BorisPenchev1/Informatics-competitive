#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int main(){
	initwindow(400,300);
	
//	moveto(0,0);
//	lineto(50,50);
	line(0, 0, 50, 50);
	rectangle(10,50,30,80);
	circle(100, 100, 20);
	getch();
	closegraph();
	
	return 0;
}
