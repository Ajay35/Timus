
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
//#define endl        '\n'
#define hell        1000000007
#define rep(i,a,b)  for(int i=a;i<b;i++)
using namespace std;

vi parent;
vi rnk;
int pieces;

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

        pieces--;
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
    int n, m;
    cin >> n >> m;
    vii edges(m);
    pieces = n;
    initialize(n);

    rep(i, 0, m)
    {
        cin >> edges[i].x >> edges[i].y;
    }

    int q;
    cin >> q;
    vi actions(m);
    vi joins;

    rep(i, 0, q)
    {
        int k;
        cin >> k;
        actions[k - 1] = 1;
        joins.pb(k - 1);
    }

    rep(i, 0, m)
    {
        if (actions[i] == 0)
        {
            if (get_parent(edges[i].x) != get_parent(edges[i].y))
            {
                merge_set(edges[i].x, edges[i].y);
            }
        }
    }

    vi ans;

    for (int i = sz(joins) - 1; i >= 0; i--)
    {
        ans.pb(pieces);

        int x = edges[joins[i]].x;
        int y = edges[joins[i]].y;

        if (get_parent(x) != get_parent(y))
        {
            merge_set(x, y);
        }
    }

    for (int i = sz(ans) - 1; i >= 0; i--)
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

