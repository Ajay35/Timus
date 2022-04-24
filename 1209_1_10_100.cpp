
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

map<ll, int> ones;


void solve()
{
    ll n;
    cin >> n;

    if (ones.find(n) == ones.end())
        cout << 0 << " ";
    else
        cout << 1 << " ";

}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int c = 0;
    ll i;
    for (i = 1; i <= ((1ll<<31) - 1); i += c)
    {
        ones[i] = 1;
        c++;
    }
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

