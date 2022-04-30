
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
#define hell        1000000007
#define rep(i,a,b)  for(int i=a;i<b;i++)
using namespace std;

void solve()
{
    int n, ans;
    cin >> n;
    vector<vi> reports(n, vi(2));

    vector<vi> end_times(30001);

    rep(i, 0, n)
    {
        cin >> reports[i][0] >> reports[i][1];
        int s = reports[i][1] - reports[i][0] + 1;
        end_times[reports[i][1]].pb(s);
    }

    vi dp(30001);   

    dp[0] = 0;

    rep(i, 0, n)
    {
        dp[reports[i][1]] = 1;
    }

    rep(i, 1, 30001)
    {
        dp[i] = max(dp[i], dp[i - 1]);

        if (sz(end_times[i]) > 0)
        {
            vi& ends = end_times[i];

            rep(j, 0, sz(ends))
            {
                int s = ends[j];

                if (s <= i and dp[i] < 1 + dp[i - s])
                {
                    dp[i] = 1 + dp[i - s];
                }
            }
        }

    }

    cout << dp[30000] << endl;
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

