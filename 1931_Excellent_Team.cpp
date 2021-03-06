
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
    set<pii> s;

    rep(i, 0, n)
    {
        int p;
        cin >> p;
        s.insert({i + 1, p});
    }

    vi cnt(n + 1);

    while (sz(s) > 1)
    {
        pii cur = *s.begin();
        s.erase(s.begin());

        while (sz(s) > 0)
        {
            pii nxt = *s.begin();

            cnt[cur.x]++;
            cnt[nxt.x]++;

            if (nxt.y < cur.y)
            {
                break;
            }
            else
            {
                s.erase(s.begin());
            }
        }
    }

    int ans = -1;
    int mx = -1;

    rep(i, 1, n + 1)
    {
        if (mx < cnt[i])
        {
            mx = cnt[i];
            ans = i;
        }
    }

    cout << ans << endl;
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

