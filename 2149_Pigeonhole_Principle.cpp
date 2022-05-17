
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
    while (cin >> n)
    {
        long long a[100];
        a[0] = 0;
        a[1] = 1;
        int i = 2;
        rep (i, 0, n)
        {
            if (i % 2 == 0)
            {
                a[i] = a[i - 1] + a[i - 2];
            }
            else
            {
                a[i] = a[i - 1] * a[i - 2];
            }
        }
        cout << a[n - 1] << endl;

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

