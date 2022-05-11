
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


int cities[101];

int parent[101];
int rnk[101];
int pieces;

struct edge
{
    int u, v, w;
};

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
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        rnk[i] = 0;
    }
}


void solve()
{
    int n, k;
    cin >> n >> k;
    vector<edge> edges(n + 1);
    initialize(n);
    pieces = n;
    vi cities(k);

    for (int i = 0; i < k; i++)
    {
        cin >> cities[i];
    }


    rep(i, 0, n)
    {
        rep(j, 0, n)
        {
            int p;
            cin >> p;
            edge e;
            e.u = i + 1;
            e.v = j + 1;
            e.w = p;
            edges.pb(e);
        }
    }


    rep(i, 0, k)
    {
        rep(j, i + 1, k)
        {
            if (get_parent(cities[i]) != get_parent(cities[j]))
            {
                merge_set(cities[i], cities[j]);
            }
        }
    }

    sort(all(edges), [&](edge e1, edge e2) {
        return e1.w < e2.w;
    });

    int ans = 0;

    rep(i, 0, sz(edges))
    {

        if (pieces == 1)
            break;
        int u = edges[i].u;
        int v = edges[i].v;
        int w = edges[i].w;

        if (get_parent(u) != get_parent(v))
        {
            merge_set(u, v);
            ans += w;
        }

    }

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

