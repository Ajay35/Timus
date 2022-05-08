
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

const double pi=acos(-1.0);


void solve()
{
    double v, a, k;
    cin >> v >> a >> k;
    double ans = 0;
    a = a * pi / 180;

    while (1)
    {
        if (v < 0.01)
            break;
        ans += (2 * v * cos(a) * v * sin(a)) / 10.0;
        double ek = 0.5 * v * v;
        ek = ek / k;
        v = sqrt(ek * 2.0);
    }
    cout << fixed << setprecision(2) << ans << endl;
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

