#include<bits/stdc++.h>
using namespace std;

int a, b, c, d, res, Min, Max, max_s, min_s ;

int main() {
   
   cin >> a >> b >> c >> d ;
   
   Min = min(a, b);
   Min = min(Min, c);
   Min = min(Min, d);
   
   Max = max(a, b);
   Max = max(Max, c);
   Max = max(Max, d);
   
   if (Max == a and Min == d){
   	    max_s = max(b, c);
   	    min_s = min(b, c);
   }
   else
   if (Max == b and Min == c){
   	    max_s = max(a, d);
   	    min_s = min(a, d);
   }
   else
   if (Max == a and Min == c){
   	    max_s = max(a, c);
   	    min_s = min(a, c);
   }
   else
   if (Max == b and Min == d){
   	    max_s = max(b, d);
   	    min_s = min(b, d);
   }
   else
   if (Max == a and Min == b){
   	    max_s = max(a, b);
   	    min_s = min(a, b);
   }
   else
   if (Max == c and Min == d){
   	    max_s = max(c, d);
   	    min_s = min(c, d);
   }
   
   
    return 0;
}

