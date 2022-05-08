
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
    vector<ll> stone(3);

    rep(i, 0, 3)
    {
        cin >> stone[i];
    }

    int ans = 0;

    while (true)
    {
        ll diff = LLONG_MAX;

        for (int i = 0; i < sz(stone); i++)
        {
            for (int j = i + 1; j < sz(stone); j++)
            {
                diff = min(diff, abs(stone[i] - stone[j]));
            }
        }


        if (diff != 0)
        {
            stone.pb(diff);
            ans++;
        }
        else
        {
            break;
        }
    }

    cout << ans + 1 << endl;



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

