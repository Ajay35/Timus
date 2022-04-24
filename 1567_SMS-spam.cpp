
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
    string str;
    getline(cin, str);
    int ans = 0;
    rep(i, 0, sz(str))
    {
        if (str[i] == ' ')
            ans++;
        else if (str[i] == '.' or str[i] == ',' or str[i] == '!')
        {
            if (str[i] == '.')
                ans++;
            if (str[i] == ',')
                ans += 2;
            if (str[i] == '!')
                ans += 3;
        }
        else if (str[i] == 'y' or str[i] == 'z')
        {
            if (str[i] == 'y')
                ans++;
            else
                ans += 2;
        }
        else
        {
            int ch = str[i] - 'a' + 1;
            ch = ch % 3;
            if (ch == 1)
                ans++;
            else if (ch == 2)
                ans += 2;
            else
                ans += 3;

        }
    }
    cout<<ans<<endl;
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

