        #include <bits/stdc++.h>
        #define ll long long

        using namespace std;

        int main() {

            ll a, b, c;
            ll d, t;
            cin >> a;
            cin >> b;
            cin >> c;
            cin >> t;
            cin >> d;

            ll gcd = __gcd(__gcd(a, b), c);
            ll lcm = (a * b * c) / gcd; 

            ll start = (d - 1) * t;
            ll end = d * t - 1;

            ll br = (end / lcm) - (start / lcm) + 1;

            //cout << lcm << " " << start << " " << end << endl;
            cout << br << endl ;

            return 0;
        }
