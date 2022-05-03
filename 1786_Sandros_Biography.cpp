
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


int get_cost(string& t, string tt)
{
    int cost = 0;

    for (int i = 0; i < sz(t); i++)
    {
        if (t[i] != tt[i])
        {
            if (tolower(tt[i]) != tolower(t[i]))
                cost += 5;

            if (('Z' >= tt[i] and tt[i] >= 'A' and 'z' >= t[i] and t[i] >= 'a') or ('z' >= tt[i] and tt[i] >= 'a' and 'Z' >= t[i] and t[i] >= 'A'))
                cost += 5;
        }
    }

    return cost;
}

void solve()
{
    string s;
    cin >> s;
    string t = "Sandro";

    int ans = 1e9;

    for (int i = 0; i + sz(t) - 1 < sz(s); i++)
    {
        string temp = s.substr(i, sz(t));

        ans = min(ans, get_cost(temp, t));
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

