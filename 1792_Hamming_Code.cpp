
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

bool is_hamming(vi& a)
{
    return (a[4] == (a[1] + a[2] + a[3]) % 2) and (a[5] == (a[0] + a[2] + a[3]) % 2) and (a[6] == (a[0] + a[1] + a[3]) % 2);
}

void print(vi a)
{
    rep(i, 0, 7)
    {
        cout << a[i];
        if (a[i] < 6)
            cout << " ";
    }
}

void solve()
{
    vi a(7);

    rep(i, 0, 7)
    {
        cin >> a[i];
    }

    if (is_hamming(a))
    {
        print(a);
    }

    rep(i, 0, 7)
    {
        a[i] = 1 - a[i];
        if (is_hamming(a))
        {
            print(a);
            return;
        }
        a[i] = 1 - a[i];
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

