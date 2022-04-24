
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
#define hell        1000000007
#define rep(i,a,b)  for(int i=a;i<b;i++)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<vi> a(n, vi(n));
    rep(i, 0, n)
    {
        rep(j, 0, n)
        {
            cin >> a[i][j];
        }
    }
    int r = 0, c = 0;
    while (r < n or c < n)
    {
        if (r < n - 1)
        {
            int rr = r;
            int cc = c;
            while (rr >= 0 and cc < n)
            {
                cout << a[rr][cc] << " ";
                rr--;
                cc++;
            }
            r++;
        }
        else if (c < n)
        {
            int rr = r;
            int cc = c;
            while (rr >= 0 and cc < n)
            {
                cout << a[rr][cc] << " ";
                rr--;
                cc++;
            }
            c++;
        }
        else
            break;
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

