
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
    int s;
    cin >> s;

    int ans = 0;

    ll dp[s + 1];

    for(int i = 0; i <= s; i++)
    {
        dp[i] = 0;
    }

    dp[1] = 10;


    
    for(int j = s; j > 1; j--)
    {
        for(int k = 0; k < 10; k++)
        {
            if(s >= k)
            {
                dp[j] += dp[j - k]; 
            }
        }
    }
    }

    cout << dp[s] << endl;
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

