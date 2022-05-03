
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

float pi = 3.1415926;

float dist(float x1, float y1, float x2, float y2)
{
    float dx = x1 - x2;
    float dy = y1 - y2;
    return sqrt(dx * dx + dy * dy);
}

void solve()
{
    int n;
    float r;
    cin >> n >> r;

    float d = 0;

    vector<pair<float, float>> a(n);

    rep(i, 0, n)
    {
        cin >> a[i].x >> a[i].y;

        if (i > 0)
        {
            double dd = dist(a[i].x, a[i].y, a[i - 1].x, a[i - 1].y);
            d += dd;
        }
    }

    if (n > 1)
    {
        d += dist(a[0].x, a[0].y, a[n - 1].x, a[n - 1].y);
    }

    d += (2 * 3.1415 * r);

    cout << fixed << setprecision(2) << d << endl;
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

