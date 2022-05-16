
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
    int n, hold_n;

    int r1, r2, r3, r4;

    cin >> n;
    int zeros = 0;

    for (int i = 10; true; i *= 10)
    {
        r1 = r2 = r3 = r4 = 1;
        hold_n = n;

        while (hold_n--)
        {
            r2 = (r2 * 2) % i;
            r3 = (r3 * 3) % i;
            r4 = (r4 * 4) % i;
        }

        if ( (r1 + r2 + r3 + r4) % i == 0 )
            ++zeros;
        else
            break;
    }

    cout << zeros << endl;


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

