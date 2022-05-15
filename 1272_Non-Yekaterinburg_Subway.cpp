
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

const int N = 10000;
int parent[N + 5], siz[N + 5];
int components;

int find_set(int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void make_set(int v)
{
    parent[v] = v;
    siz[v] = 1;
}

void union_sets(int a, int b)
{
    a = find_set(a);
    b = find_set(b);

    if (a != b)
    {
        if (siz[a] < siz[b])
        {
            swap(a, b);
        }

        parent[b] = a;
        siz[a] += siz[b];
        components--;
    }
}

void solve()
{
    int n, k, m;
    cin >> n >> k >> m;
    components = n;

    rep(i, 1, n + 1)
    {
        make_set(i);
    }

    rep(i, 1, k + 1)
    {
        int u, v;
        cin >> u >> v;

        if (find_set(u) != find_set(v))
        {
            union_sets(u, v);
        }
    }

    int ans = 0;

    for (int i = 0; i < m and components > 1; i++)
    {
        int u, v;
        cin >> u >> v;

        if (find_set(u) != find_set(v))
        {
            union_sets(u, v);
            ans++;
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

