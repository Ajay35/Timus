
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


bool palindrome(string& s)
{
    int l = 0, r = sz(s) - 1;

    while (l < r)
    {
        if (s[l] != s[r])
            return false;
        l++;
        r--;
    }

    return true;
}

void solve()
{
    string s;
    cin >> s;

    if (sz(s) == 1)
    {
        cout << s << s << endl;
        return;
    }

    for (int i = 1; i < sz(s); i++)
    {
        string sub = s.substr(i);

        if (palindrome(sub))
        {
            string sub1 = s.substr(0, i);
            cout << s.substr(0, i);
            cout << sub;
            reverse(all(sub1));
            cout << sub1;
            return;
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

