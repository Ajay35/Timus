
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
    int n, q;
    cin >> n;

    unordered_map<int, vi> store;

    rep(i, 1, n + 1)
    {
        int p;
        cin >> p;
        store[p].pb(i);
    }

    cin >> q;

    while (q--)
    {
        int l, r, v;
        cin >> l >> r >> v;

        if (store.find(v) != store.end())
        {

            int ind = lower_bound(all(store[v]), l) - begin(store[v]);

            if (ind == sz(store[v]))
            {
                cout << 0;
            }
            else if (store[v][ind] <= r and store[v][ind] >= l)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        else
        {
            cout << 0;
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

