
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

ll dp[10][82];
int dp1[82];

ll f(int p, int s)
{
    if (p > 9)
    {
        if (s == 0)
        {
            return 1;
        }

        return 0;
    }

    ll& ans = dp[p][s];

    if (ans != -1)
        return ans;
    else
        ans = 0;

    for (int i = 0; i <= 9; i++)
    {
        if (i <= s)
        {
            ans += f(p + 1, s - i);
        }
    }

    return ans;
}

void solve()
{
    int s;
    cin >> s;

    //memset(dp, -1, sizeof dp);
    //ll ans = f(1, s);




    dp1[0] = 1;

    for (int i = 1; i <= 9; i++)
    {
        for (int j = 9 * i; j >= 1; j--)
        {
            for (int k = 1; k <= 9; k++)
            {

                if (k > j)
                {
                    break;
                }

                dp1[j] += dp1[j - k];
            }
        }
    }

    dp1[1]++;

    cout << dp1[s] << endl;
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

