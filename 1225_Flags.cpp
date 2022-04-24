
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
    vector<ll> dp(n + 1);
    if (n == 1 or n == 2)
    {
        cout << 2 << endl;
        return;
    }
    if (n == 3)
    {
        cout << 4 << endl;
        return;
    }

    dp[1] = 2;
    dp[2] = 2;
    dp[3] = 4;

    for (int i = 4; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << dp[n] << endl;
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

