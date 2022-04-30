
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
    string s, t;
    cin >> s;
    int c = s[0] - 'a';
    c -= 5;
    c = (c + 26) % 26;
    t.pb((char)(c + 'a'));
    
    rep(i, 1, sz(s))
    {
        int cur = s[i] - 'a';
        cur = cur - ((s[i - 1] - 'a'));
        if (cur < 0)
            cur += 26;
        cur = (cur % 26);

        t.pb((char) (cur + 'a'));

    }

    cout << t << endl;
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

