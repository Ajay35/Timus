
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

int dp[147][147];
int ans[47];
//dp[i][j] = dp[i-1][j]*j + dp[i-1][j-1]*j;

void solve()
{
    int n;
    while (cin >> n)
    {
        if (n == -1)
            break;

        memset(ans, 0, sizeof(ans));
        dp[1][0] = 0;
        dp[1][1] = 1;

        for (int i = 2; i <= 10; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                dp[i][j] = dp[i - 1][j] * j + dp[i - 1][j - 1] * j;
                ans[i] += dp[i][j];
            }
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

