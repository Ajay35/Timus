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
    char a[1000000];
    int n, m;
    cin >> n;

    for (int i = 0, x = 0, y = 0; i < n; ++i)
    {
        cin >> x >> y;
        a[i] = x + y;
    }

    for (int i = n - 1; i > 0; --i)
    {
        a[i - 1] += a[i] / 10;
        a[i] %= 10;
    }

    for (int i = 0; i < n; ++i)
        cout << (char)(a[i] + '0');
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

