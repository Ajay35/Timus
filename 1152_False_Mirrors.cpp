
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

int n;
int a[21];
int dp[1 << 20];

int f(int mask)
{
    if (mask == ((1 << n) - 1))
        return 0;

    if (dp[mask] != -1)
        return dp[mask];

    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        // check if i the position is shot, if not shoot it impacts i,i + 1,i + 2.

        if (!(mask & (1 << i)))
        {
            
            int new_mask = mask;
            
            int cur = i;
            int cur_next = ((i + 1) % n);
            int cur_next_next = ((i + 2) % n);

            new_mask = new_mask | (1<<cur);
            new_mask = new_mask | (1<<cur_next);
            new_mask = new_mask | (1<<cur_next_next);
            int sum = 0;

            for (int j = 0; j < n; j++)
            {
                if (!(new_mask & (1 << j)))
                    sum += a[j];
            }

            ans = min(ans, sum + f(new_mask));
        }
    }

    return dp[mask] = ans;
}

void solve()
{
    cin >> n;

    rep(i, 0, n)
    {
        cin >> a[i];
    }

    memset(dp, -1, sizeof dp);

    cout << f(0) << endl;
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

