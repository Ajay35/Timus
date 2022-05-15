
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
    int n, m;
    cin >> n >> m;

    vi g(n), b(m);

    rep(i, 0, n)
    {
        cin >> g[i];
    }

    rep(i, 0, m)
    {
        cin >> b[i];
    }

    sort(all(g));
    sort(all(b));
    int gg = n - 1, bb = m - 1;

    int ans = INT_MAX;

    while (gg >= 0 and bb >= 0)
    {
        int k = m - bb - 1;
        // upset girls
        int ug = 0, ub = 0;

        for (int i = 0; i <= gg; i++)
        {
            ug += g[i];
        }

        for (int i = 0; i <= bb; i++)
        {
            ub += (k * b[i]);
        }

        ans = min(ans, ug + ub);
        gg--;
        bb--;
    }

    int ug = 0, ub = 0;

    for (int i = 0; i <= gg; i++)
    {
        ug += g[i];
    }

    for (int i = 0; i <= bb; i++)
    {
        ub += ((m - bb - 1) * b[i]);
    }

    ans = min(ans, ug + ub);
    cout << ans << endl;
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

