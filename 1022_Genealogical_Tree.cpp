
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

int inc[101];

void solve()
{
    int n;
    cin >> n;

    g.resize(n + 1);

    for (int i = 1; i <= n; i++)
    {
        int p;

        while (cin >> p)
        {
            if (p == 0)
                break;

            g[i].pb(p);
            inc[p]++;
        }
    }

    queue<int> que;

    rep(i, 1, n + 1)
    {
        if (inc[i] == 0)
        {
            que.push(i);
        }
    }

    while (!que.empty())
    {
        int cur = que.front();
        que.pop();

        cout << cur << " ";

        for (int v : g[cur])
        {
            if (--inc[v] == 0)
            {
                que.push(v);
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

