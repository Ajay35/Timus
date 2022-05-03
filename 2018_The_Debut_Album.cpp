
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

ll dp[50001][2];

int a, b;

ll f(int n, int bit)
{
    if (n == 0)
    {
        return 1;
    }

    ll& ans = dp[n][bit];

    if (ans != -1)
    {
        return ans;
    }

    ans = 0;

    if (bit == 0)
    {
        for (int i = 1; i <= min(a, n); i++)
        {
            ans += f(n - i, 1 - bit) % hell;
            ans = ans % hell;
        }
    }
    else
    {
        for (int i = 1; i <= min(b, n); i++)
        {
            ans += f(n - i, 1 - bit) % hell;
            ans = ans % hell;
        }
    }

    return ans % hell;
}

void solve()
{
    int n;
    cin >> n >> a >> b;
    /*
        memset(dp, -1, sizeof dp);
        ll ans = f(n , 0) % hell;
        memset(dp, -1, sizeof dp);
        ans += f(n, 1) % hell;
        ans = ans % hell;
    */

    ll dp1[n + 1][2];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            dp1[i][j] = 0;
        }
    }

    dp1[0][0] = 1;
    dp1[0][1] = 1;
    dp1[1][0] = 1;
    dp1[1][1] = 1;

    for (int i = 2; i <= n; i++)
    {
        for (int k = i - 1; k >= 0 and i - k <= a; --k)
        {
            dp1[i][0] += dp1[k][1] % hell;
            dp1[i][0] = dp1[i][0] % hell;
        }

        for (int k = i - 1; k >= 0 and i - k <= b; --k)
        {
            dp1[i][1] += dp1[k][0] % hell;
            dp1[i][1] = dp1[i][1] % hell;
        }
    }
    cout << (dp1[n][0] % hell + dp1[n][1] % hell) % hell << endl;
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

