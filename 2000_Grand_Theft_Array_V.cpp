
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
    vi a(n);

    rep(i, 0, n)
    {
        cin >> a[i];
    }
    int p1, p2;
    cin >> p1 >> p2;
    --p1, --p2;

    if (p1 == p2)
    {
        int sum1 = 0, sum2 = 0;

        rep(i, 0, p1)
        {
            sum1 += a[i];
        }
        for (int j = p1 + 1; j < n; ++j)
        {
            sum2 += a[j];
        }

        cout << max(sum1, sum2) + a[p1] << ' ' << min(sum1, sum2) << endl;
        return;
    }

    bool _swap = p1 > p2;
    if (p1 > p2)
        swap(p1, p2);

    int middle = p1 + (p2 - p1 - 1) / 2 + (((p2 - p1 - 1) & 1) && !_swap);
    ll sum1 = 0, sum2 = 0;

    rep(i, 0, n)
    {
        if (i <= middle)
        {
            sum1 += a[i];
        }
        else
        {
            sum2 += a[i];
        }
    }

    if (_swap)
        swap(sum1, sum2);
    cout << sum1 << ' ' << sum2 << endl;
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

