
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

    if (n == 0)
    {
        cout << 10 << endl;
        return;
    }

    if (n == 1)
    {
        cout << n << endl;
        return;
    }


    // prime check
    vi digits;

    for (int i = 9; i >= 2; i--)
    {
        while (n % i == 0)
        {
            digits.pb(i);
            n = n / i;
        }
    }

    if (n > 1)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = sz(digits) - 1; i >= 0; i--)
        {
            cout << digits[i];
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

