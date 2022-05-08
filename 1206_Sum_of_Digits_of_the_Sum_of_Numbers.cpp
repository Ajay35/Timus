
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


unsigned ll dp[51][451][10];

ll f(int k, int diff, int c)
{
    if (k == 0)
    {
        return  + sum2 == sum;
    }

    unsigned ll& ans = dp[k][sum1][sum2];

    if(ans != -1)
        return ans;
    else
        ans = 0;

    int st = (k == 1 ? 1 : 0);

    for (int i = st; i < 10; i++)
    {
        for (int j = st; j < 10; j++)
        {
            ans += f(k - 1, sum1 + i, sum2 + j, sum + ((c + i + j) % 10), ((c + i + j)) / 10);
        }
    }

    return ans;
}

void solve()
{
    int k;
    cin >> k;

    memset(dp, -1, sizeof dp);

    cout << f(k, 0, 0, 0, 0) << endl;

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

