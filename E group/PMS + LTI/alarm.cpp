    #include<bits/stdc++.h>

    using namespace std;

    int collins(string s){
        int br = 0 ;
        for (int i = 0 ; i < s.size() ;i++){
            if (s[i] == ':') br++ ;
            if (br == 2) break ;
        }
        return br ;
    }

    int main(){

        int hs, ms, ss ;
        char c ;
        cin >> hs >> c ;
        cin >> ms >> c ;
        cin >> ss ;

        int he, me, se ;
        string in_end;
        cin >> in_end ;

        int len = in_end.size() ;
        int br ;

        if (len == 5) br = collins(in_end);
        else if (len > 5) br = 2 ;
        else if (len == 4 or len == 3) br = 1 ;
        else br = 0 ;

        if (br == 0){
            he = 0 ;
            me = 0 ;
            se = stoi(in_end) ;
        }
        else if (br == 1){
            int i = 0;
            while (in_end[i] != ':'){
                me += in_end[i] - '0' ;
            }
            i++ ;
            while (in_end[i] != ':'){
                se += in_end[i] - '0' ;
            }
        }
        else {
            int i = 0;
            while (in_end[i] != ':'){
                he += in_end[i] - '0' ;
            }
            i++ ;
            while (in_end[i] != ':'){
                se += in_end[i] - '0' ;
            }
            i++ ;
            while (i < in_end.size()){
                se += in_end[i] - '0' ;
            }
        }
        

        //-------------------------------------------------------

        int sum_h = hs + he ;
        int sum_m = ms + me ;
        int sum_s = ss + se ;

        int days = sum_h / 24 ; int h = sum_h % 24 ;
        int m = sum_m % 60 ; h += sum_m / 60 ;
        int s = sum_s % 60 ; m += sum_s / 60 ; h += m / 60 ; m %= 60 ; days += h / 24 ; h %= 24 ; 

        //-------------------------------------------------------

        // if (h < 10 and m >= 10 and s >= 10) cout << "0" << h << ":" << m << ":" << s << "+" << days << " days" << endl ;
        // else if (h < 10 and m < 10 and s >= 10) cout << "0" << h << ":0" << m << ":" << s << "+" << days << " days" << endl ;
        // else if (h < 10 and m < 10 and s < 10) cout << "0" << h << ":0" << m << ":0" << s << "+" << days << " days" << endl ;
        // else if (m < 10 and h >= 10 and s >= 10) cout << h << ":" << "0" << m << ":" << s << "+" << days << " days" << endl ;
        // else if (s < 10 and h >= 10 and m >= 10) cout << h << ":" << m << ":" << "0" << s << "+" << days << " days" << endl ;
        // else cout << h << ":" << m << ":" << s << "+" << days << " days" << endl ;

        cout << hs << ":" << ms << ":" << ss << endl ;
        cout << he << ":" << me << ":" << se << endl ;
        cout << h << ":" << m << ":" << s << "+" << days << " days" << endl ;

        return 0;
    }