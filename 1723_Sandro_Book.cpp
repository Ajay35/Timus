
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
    string s;
    cin >> s;
    int n = sz(s);

    map<string, int> substrings;
    if (n == 1)
    {
        cout << s << endl;
        return;
    }
    rep(i, 0, n)
    {
        rep(j, i, n)
        {
            string sub_s = s.substr(i, j - i + 1);
            substrings[sub_s]++;
        }
    }
    int m = 0;
    string ans;
    for (auto it : substrings)
    {
        if (it.y >= m)
        {
            m = it.y;
            ans = it.x;
        }
    }
    cout << ans << endl;
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

