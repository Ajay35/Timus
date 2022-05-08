
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

int dp[100000], ans[100001];

void solve()
{

    dp[0] = 0, ans[0] = 0;
    dp[1] = 1, ans[1] = 1;

    for (int i = 2; i < 100000; ++i)
    {
        if (i & 1)
        {
            dp[i] = dp[i / 2] + dp[i / 2 + 1];
            ans[i] = max(dp[i], ans[i - 1]);
        }
        else
        {
            dp[i] = dp[i / 2];
            ans[i] = ans[i - 1];
        }
    }

    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        cout << ans[n] << endl;
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

