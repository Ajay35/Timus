
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
    ll ans = 0;
    cin >> n >> k;
    vector<vector<int>> dp(n + 1, vi(k));
    for (int i = 0; i < k; i++)
        dp[1][i] = 1;

    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            for (int l = ((i == 2 or j == 0) ? 1 : 0); l < k; l++)
                dp[i][j] += dp[i - 1][l];
        }
    }

    rep(i, 0, k)
    {
        ans += dp[n][i];
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

