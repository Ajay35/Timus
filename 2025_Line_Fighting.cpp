
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
    int n, k;
    cin >> n >> k;
    vi groups;
    int g = n / k;
    n -= (g * k);
    vi a(k, g);
    int ind = 0;

    while (n--)
    {
        a[ind++]++;
        ind = ind % k;
    }

    int sum = accumulate(all(a), 0);
    ll ans = 0;

    rep(i, 0, k)
    {
        ans += a[i] * (sum - a[i]);
        sum -= a[i];
    }



    cout << ans << endl;

}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

