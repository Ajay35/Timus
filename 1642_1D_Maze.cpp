
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

    int n, p;
    cin >> n >> p;

    vi a(n);


    rep(i, 0, n)
    {
        cin >> a[i];
    }

    a.pb(-1001);
    a.pb(1001);
    a.pb(0);
    sort(all(a));

    int zero_pos = lower_bound(all(a), 0) - begin(a);

    if (p < 0)
    {
        if (a[zero_pos - 1] > p)
        {
            cout << "Impossible" << endl;
        }
        else
        {
            int le = p;
            int ri = (a[zero_pos + 1] == 1001 ? 0 : a[zero_pos + 1]);

            cout << 2 * ri - le << " " << -le << endl;
        }
    }
    else
    {
        if (a[zero_pos + 1] < p)
        {
            cout << "Impossible" << endl;
        }
        else
        {
            int le = (a[zero_pos - 1] == -1001 ? 0 : a[zero_pos - 1]);
            int ri = p;

            cout << ri << " " << 2 * abs(le) + ri << endl;
        }
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

