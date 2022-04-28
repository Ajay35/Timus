
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
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b < c)
    {
        cout << "Impossible" << endl;
    }
    else
    {
        int p, q;
        if (a < b)
        {
            p = min(c, b);
            c -= min(c, b);
            q = min(c, a);
            cout << q << " " << p << endl;
        }
        else
        {
            p = min(c, a);
            c -= min(c, a);
            q = min(c, b);
            cout << p << " " << q << endl;
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

