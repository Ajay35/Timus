
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
    int l, k, h;
    float min_t = 0.0, max_t = 0.0;

    cin >> l >> k >> h;
    max_t = (l % k == 0) ? (l / k) : (l / k + 1);
    max_t = max_t * h;
    min_t = l / k * h;
    cout << setiosflags(ios::fixed) << setprecision (6)
         << min_t << ' ' << max_t << endl;
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

