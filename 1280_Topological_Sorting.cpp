
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

vector<vi> g;

void solve()
{
    int n, m;

    cin >> n >> m;
    g.resize(n + 1);
    vi inc(n + 1);

    rep(i, 0, m)
    {
        int u, v;
        cin >> u >> v;
        g[u].pb(v);
        inc[v]++;
    }

    vi a(n);

    rep(i, 0, n)
    {
        cin >> a[i];
    }

    int ind = 0;

    while (ind < n)
    {
        if (inc[a[ind]] == 0)
        {
            for (int to : g[a[ind]])
            {
                --inc[to];
            }

            ind++;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;

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

