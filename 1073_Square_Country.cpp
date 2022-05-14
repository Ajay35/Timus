
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

    vi dp(n + 1, 1e9);

    rep(i, 1, 2501)
    {
        if (i * i <= n)
        {
            dp[i * i] = 1;
        }
        else
            break;

    }

    rep(i, 1, n + 1)
    {
        for (int j = 1; j * j <= i; j++)
        {
            if (j * j <= i and dp[i] > dp[i - j * j] + 1)
            {
                dp[i] = 1 + dp[i - j * j];
            }
        }
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

