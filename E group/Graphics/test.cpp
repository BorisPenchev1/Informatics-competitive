#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int main(){
	
	int x1, x2, y1, y2 ;
	
	initwindow(600, 500) ;
	
	x1 = x2 ;
	y1 = y2 ;
	
	cout << "X = " << endl ;
	cin >> x1 ;
	cout << "Y = " << endl ;
	cin >> y1 ;
	
	setcolor(5);
	rectangle(y1, x1, y2, x2) ;
	

	getch();
	closegraph();
	
	return 0;
}
