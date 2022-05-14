
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

    vector<pair<int, pii>> roads(n);

    rep(i, 0, n)
    {
        roads[i].x = i + 1;
        cin >> roads[i].y.x >> roads[i].y.y;
    }

    sort(all(roads), [&](pair<int, pii>& a, pair<int, pii>& b) {
        if (a.y.x == b.y.x)
            return a.y.y < b.y.y;
        return a.y.x < b.y.x;

    });

    for (int i = 1; i < n; i += 2)
    {
        cout << roads[i - 1].x << " " << roads[i].x << endl;
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

