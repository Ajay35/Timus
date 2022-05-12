
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

int pre[501][2];
int dp[501][501];

int n;

int get_range(int l, int r)
{
    int ret1 = pre[r][0] - ((l > 0) ? pre[l - 1][0] : 0);
    int ret2 = pre[r][1] - ((l > 0) ? pre[l - 1][1] : 0);
    return ret1 * ret2;
}

int f(int i, int k)
{
    if (k == 1)
    {
        return get_range(i, n - 1);
    }

    int& ans = dp[i][k];

    if (ans != -1)
        return ans;
    else
        ans = 1e9;

    // include in the same stable or condier i'th horse for the next stable...

    for (int j = i; j < n; j++)
    {
        ans = min(ans, get_range(i, j) + f(j + 1, k - 1));
    }

    return ans;
}

void solve()
{
    int k;
    cin >> n >> k;

    //memset(dp, -1, sizeof dp);

    rep(i, 1, n + 1)
    {
        int p;
        cin>>p;

        pre[i][0] += pre[i - 1][0];
        pre[i][1] += pre[i - 1][1];

        if (p > 0)
        {
            pre[i][1] += 1;
        }
        else
        {
            pre[i][0] += 1;
        }
    }


    for(int i = 0; i <= k; i++)
    {
        for(int j = 0; j <= n; j++)
        {
            dp[i][j] = 1e9;
        }
    }

    dp[0][0] = 0;

    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int h = 0; h < j; h++)
            {
                dp[i][j] = min(dp[i][j], dp[i - 1][h] + get_range(h + 1, j));
            }
        }
    }

    cout << dp[k][n] << endl;

    //cout << f(0, k) << endl;
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

