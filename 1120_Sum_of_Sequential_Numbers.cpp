
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

    // S = n * A + sum(1....(n - 1));
    // S = n * A + (n * (n - 1))/2;
    // S = (2 * n * A)/ 2 + (n * (n - 1))/2;
    // 2 * S = (2 * n * A) + (n * (n - 1));

    // 2 * S - (n * (n - 1)) = (2 * n * A);
    // ((2 * S) - (n * (n - 1)))/ (2 * n) = A;


    ll s;
    cin >> s;
    s = 2 * s;

    for (ll i = 100000; i >= 1; i--)
    {
        ll d = s - (i * (i - 1));

        if (d > 0 and (i * 2) <= d)
        {
            ll p = (s - (i * (i - 1))) % (i * 2);

            if (p == 0)
            {
                cout << (s - (i * (i - 1))) / (i * 2) << " " << i << endl;
                return;
            }
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

