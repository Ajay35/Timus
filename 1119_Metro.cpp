
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

map<pii, int> crossable;

vector<vector<double>> dp;

// recursion + memoization.. top-down

double f(int n, int m)
{
    if (n == 0 and m == 0)
        return 0;
    if (n < 0 or m < 0)
        return 1e8;
    double& ans = dp[n][m];

    if (ans != -1.0)
        return ans;

    ans = DBL_MAX;

    if (crossable.find({n, m}) != crossable.end())
    {
        ans = min(ans, 141.421356 + f(n - 1, m - 1));
    }

    ans = min(ans , 100 + min(f(n - 1, m), f(n, m - 1)));
    return ans;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    dp.resize(n + 1, vector<double>(m + 1, 1e9));

    int k;
    cin >> k;
    rep(i, 0, k)
    {
        int p, q;
        cin >> p >> q;
        crossable[ {p, q}] = 1;
    }


    // bottom-up approach...

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            dp[i][j] = (i + j) * 100;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            dp[i][j] = min(dp[i][j], 100.0 + min(dp[i - 1][j], dp[i][j - 1]));

            if (crossable.find({i, j}) != crossable.end())
            {
                dp[i][j] = min(dp[i][j], 141.421356 + dp[i - 1][j - 1]);
            }
        }
    }

    cout << round(dp[n][m]) << endl;
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

