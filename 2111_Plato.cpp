
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
    int n;
    cin >> n;
    vi a(n);
    int total_weight = 0;

    rep(i, 0, n)
    {
        cin >> a[i];
        total_weight += a[i];
    }

    sort(all(a), [&](int& p, int& q) {
        return p > q;
    });

    ll ans = 0;

    rep(i, 0, n)
    {
        ans += (total_weight *(1ll)* a[i]);
        total_weight -= a[i];

        if (i + 1 < n)
            ans += (total_weight * (1ll) * a[i]);
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

