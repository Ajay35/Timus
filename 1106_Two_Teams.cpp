
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
vi vis, list;


void bfs(int u)
{
    queue<int> que;
    que.push(u);
    vis[u] = 0;

    while (!que.empty())
    {
        int cur = que.front();
        que.pop();

        for (int v : g[cur])
        {
            if (vis[v] == -1)
            {
                vis[v] = 1 - vis[cur];
                que.push(v);
            }
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    g.resize(n + 1);
    vis.resize(n + 1, -1);

    rep(i, 0, n)
    {
        int p;
        while (cin >> p)
        {
            if (p == 0)
                break;
            g[i + 1].pb(p);
        }
    }

    rep(i, 1, n + 1)
    {
        if (sz(g[i]) == 0)
        {
            cout << 0 << endl;
            return;
        }
        else if (vis[i] == -1)
        {
            bfs(i);
        }
    }

    int c = 0;
    vi ans;
    rep(i, 1, n + 1)
    {
        if (vis[i] == 0)
        {
            c++;
            ans.pb(i);
        }
    }
    cout << c << endl;
    rep(i, 0, sz(ans))
    {
        cout << ans[i] << " ";
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

