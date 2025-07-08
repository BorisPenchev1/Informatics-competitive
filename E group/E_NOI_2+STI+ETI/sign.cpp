#include<iostream>

using namespace std ;

int A, B, C, D, add, subtract, mul, div ;
bool flag = 0;

int main() {
	
	cin >> A >> B >> C >> D ;
	
	add = A + B ;
	subtract = A - B ;
	mul = A * B ;
	if(B != 0){
		div = A / B ; 
	}
	
	if (add >= C and add <= D){
		cout << "+" << " " ;
		flag = 1 ;
	}	

	if (subtract >= C and subtract <= D){
		cout << "-" << " " ;
		flag = 1 ;
	}

	if (mul >= C and mul <= D){
		cout << "*" << " " ;
		flag = 1 ;
	}

	if (div >= C and div <= D and B != 0){
		cout << "/" << " " ;
		flag = 1 ;
	}
	
	else
	if(flag == 0){
		cout << "Proval" << endl ;
	}
		
	return 0;
}
