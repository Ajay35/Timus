
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

bool plus_one(string& s)
{
    rep(i, 0 , sz(s))
    {
        if (s[i] == '+' and i + 1 < sz(s))
            return true;
    }

    return false;
}

void solve()
{
    int n;
    cin >> n;
    int c = 0;
    rep(i, 0, n)
    {
        string s;
        cin >> s;
        if (plus_one(s))
            c += 2;
        else
            c += 1;
    }

    if (c + 2 == 13)
        cout << 1400 << endl;
    else
        cout << 100 * (c + 2) << endl;

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

