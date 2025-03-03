#include<bits/stdc++.h>

using namespace std ;

int  h, m, dh, dm, c, del_ch, del;

int main(){
	
	cin >> h >> m >> dh >> dm >> c ;
	
	h = h + dh ;
	m = m + dm ;
	
	while (m > 60){
		h++ ;
		m = m - 60 ;
	}
	
	if (c == 1){
		if (h == 12){
			h = 0 ;
		}
		while (m > 60){
			  h++ ;
			  m = m - 60 ;
        }
        if(h > 12){
			h = h - 12 ;
		}
		cout << h << " " << m << endl ;
	}
	else {
		if ((dm+m)% 12 == 0){
			del = (dm+m) / 12 ;
			del_ch = h * 5 + del ;
			while (m > 60){
	        	h++ ;
		        m = m - 60 ;
			}
			if(h > 12){
				h = h - 12 ;
			}
			cout << "@ " << del_ch << endl ;
		}
		else
		if((dm+m)% 12 >= 1){
			del = (dm+m) / 12 ;
			del_ch = h * 5 + del ;
			while (m > 60){
				h++ ;
				m = m - 60 ;
			}
			if(h > 12){
				h = h - 12 ;
			}
			cout << del_ch - 1 << " " << del_ch << endl ;
		}
		else
		if((dm+m)% 12 < 1){
			del = (dm+m) / 12 ;
			del_ch = h * 5 + del ;
			while (m > 60){
				h++ ;
				m = m - 60 ;
			}
			if(h > 12){
				h = h - 12 ;
			}
			cout << del_ch - 2 << " " << del_ch - 1 << endl ;
		}
	}
	
	
	
	
	return 0;
}
