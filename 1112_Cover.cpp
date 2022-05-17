
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
    int n;
    cin >> n;

    vector<pii> segments(n);
    vector<int> dp(n, 1);
    int ans = -1;
    int ans_ind = -1;
    vector<int> prev(n, -1);

    rep(i, 0, n)
    {
        cin >> segments[i].x >> segments[i].y;
    }

    sort(all(segments), [&](pii & a, pii & b) {
        if (a.x == b.x)
            return a.y < b.y;
        return a.x < b.x;
    });

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if ((segments[j].y <= segments[i].x) and (dp[j] + 1) > dp[j])
            {
                prev[i] = j;
                dp[i] = dp[j] + 1;
            }
        }

        if(ans < dp[i])
        {
            ans = dp[i];
            ans_ind = i;
        }
    }

    vii ans_vect;
    cout << ans << endl;

    while (ans_ind != -1)
    {
        ans_vect.pb(segments[ans_ind]);
        ans_ind = prev[ans_ind];
    }

    sort(all(ans_vect));

    rep(i, 0, sz(ans_vect))
    {
        cout << ans_vect[i].x << " " << ans_vect[i].y << endl;
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

