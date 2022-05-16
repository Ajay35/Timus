
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


vi parent;
vi rnk;

int get_parent(int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = get_parent(parent[v]);
}

void merge_set(int a, int b)
{
    a = get_parent(a);
    b = get_parent(b);

    if (a != b)
    {
        if (rnk[a] < rnk[b])
        {
            swap(a, b);
        }

        parent[b] = a;

        if (rnk[a] == rnk[b])
        {
            rnk[a]++;
        }
    }
}

void initialize(int n)
{
    parent.resize(n + 1);
    rnk.resize(n + 1);

    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        rnk[i] = 0;
    }
}


void solve()
{
    int n, d, a;
    cin >> n >> d >> a;
    vector<string> g(n);

    initialize(n);

    rep(i, 0, n)
    {
        cin >> g[i];
    }

    map<pair<int, int>, bool> added;

    vector<string> g_ans(n);

    rep(i, 0, n)
    {
        g_ans[i] = string(n, '0');
    }

    ll ans = 0;

    rep(i, 0, n)
    {
        rep(j, 0, sz(g[i]))
        {
            if (g[i][j] == '1' and added.find({i, j}) == added.end() and added.find({j, i}) == added.end())
            {
                added[ {i, j}] = true;

                if (get_parent(i + 1) != get_parent(j + 1))
                {
                    merge_set(i + 1, j + 1);
                }
                else
                {
                    // cancel the flight...
                    ans += d;
                    g_ans[i][j] = 'd';
                    g_ans[j][i] = 'd';
                }
            }
        }
    }

    vi vis(n + 1, -1);
    vi rem;

    rep(i, 1, n + 1)
    {
        vis[get_parent(i)] = 1;
    }

    rep(i, 1, n + 1)
    {
        if (vis[i] != -1)
        {
            rem.pb(i);
        }
    }

    for (int i = 1; i < sz(rem); i++)
    {
        g_ans[rem[0] - 1][rem[i] - 1] = 'a';
        g_ans[rem[i] - 1][rem[0] - 1] = 'a';
        ans += a;
    }

    cout << ans << endl;

    rep(i, 0, n)
    {
        rep(j, 0, n)
        {
            cout << g_ans[i][j];
        }

        cout << endl;
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

