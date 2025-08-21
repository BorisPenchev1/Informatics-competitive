#include <bits/stdc++.h>
#define int long long

using namespace std;

const int MAXN = 1e8 + 7;

int type;
int min_div[MAXN];

void sieve(int n)
{
    for (int i = 2 ; i <= n ; i++)
    {
        for (int j = i ; j <= n ; j += i)
        {
            if (min_div[j] == 0) min_div[j] = i;
        }
    }
}

void solve()
{
    cin >> type;

    if (type == 1)
    {
        int n;
        cin >> n;
        
        sieve(n);

        int cnt = 0;

        int previ = -1;
        int n1 = n;
        while (n > 1)   
        {
            if (previ == min_div[n]) cnt++;
            else
            {
                if (cnt > 1)
                {
                    cout << min_div[n1] << '^' << cnt;
                    if (n > 1) cout << '*';

                    n1 = n;
                }
                else if (cnt == 1)
                {
                    cout << min_div[n1];
                    if (n1 > 1) cout << '*';

                    n1 = n;
                }
                
                cnt = 1;
            }
            previ = min_div[n];

            n /= min_div[n];
        }

        if (cnt > 1)
        {
            cout << min_div[n1] << '^' << cnt;
        }
        else if (cnt == 1)
        {
            cout << min_div[n1];
        }

    }
    else
    {
        string s;
        cin >> s;

        stack <int> st;
        char oper;

        bool fl = false;
        for (int i = 0 ; i < s.size() ; i++)
        {
            if (isdigit(s[i]))
            {
                string tmp;
                while (i < s.size() && isdigit(s[i]))
                {
                    tmp.push_back(s[i]);
                    i++;
                }
                i--;
                int curr = stoi(tmp);
                st.push(curr);
            }
            else 
            {
                fl = true;
                oper = s[i];
            }

            if (fl == true and st.size() == 2)
            {
                int tmp;
                switch (oper)
                {
                    case '*':
                        tmp = st.top();
                        st.pop();
                        tmp *= st.top();
                        st.pop();

                        st.push(tmp);
                        break;
                    
                    case '^':
                        tmp = st.top();
                        st.pop();
                        tmp = pow(tmp, st.top());
                        st.pop();

                        st.push(tmp);
                        break;

                    default:
                        break;
                }  

                fl = false;
            }
        }


        cout << st.top() << endl;
    }
}

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

signed main()
{
    fastIO();
    solve();
}