
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
    
    long a[n + 1];

    rep(i, 1 , n + 1)
    {
        cin >> a[i];
    }

    sort(a, a+n);

    if (n & 1)
    {
        cout << fixed << setprecision(1) << a[(n + 1) / 2];
    }
    else
    {
        double median = (double)((a[n / 2] + a[n / 2 + 1])) / 2.0;
        cout << fixed << setprecision(1) << median << endl;
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

