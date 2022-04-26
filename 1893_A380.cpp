
/* Ajay Jadhav */

#include <bits/stdc++.h>

#define ll          long long
#define pb          push_back
#define pii         pair<int,int>
#define vi          vector<int>
#define vii         vector<pii>
#define mi          map<int,int>
#define mii         map<pii,int>
#define all(a)      (a).begin(),(a).end()
#define x           first
#define y           second
#define sz(x)       (int)x.size()
#define endl        '\n'
#define hell        1000000007
#define rep(i,a,b)  for(int i=a;i<b;i++)
using namespace std;

void solve()
{
    int n = 0;
    char c;

    string s;
    cin >> s;
    rep(i, 0, sz(s))
    {
        if (isdigit(s[i]))
        {
            n = n * 10 + (s[i] - '0');
        }
        else
        {
            c = s[i];
        }
    }

    if (n <= 2)
    {
        if (c == 'A' or c == 'D')
        {
            cout << "window" << endl;
        }
        else
        {
            cout << "aisle" << endl;
        }
    }
    else if (n <= 20)
    {
        if (c == 'A' or c == 'F')
        {
            cout << "window" << endl;
        }
        else if (c == 'B' or c == 'C' or c == 'D' or c == 'E')
        {
            cout << "aisle" << endl;
        }
        else
        {
            cout << "neither" << endl;
        }
    }
    else
    {
        if (c == 'A' or c == 'K')
        {
            cout << "window" << endl;
        }
        else if (c == 'C' or c == 'D' or c == 'G' or c == 'H')
        {
            cout << "aisle" << endl;
        }
        else
        {
            cout << "neither" << endl;
        }
    }

}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}

