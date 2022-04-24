
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
    int cur = 0, ans = 0;
    rep(i, 0, n)
    {
        string s;
        cin >> s;

        if (s[0] == 'A' or s[0] == 'P' or s[0] == 'O' or s[0] == 'R')
        {   
            ans += cur;
            cur = 0;
        }
        else if (s[0] == 'B' or s[0] == 'M' or s[0] == 'S' )
        {
            ans += abs(cur - 1);
            cur = 1;
        }
        else
        {
            ans += abs(cur - 2);
            cur = 2;
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

