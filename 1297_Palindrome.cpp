
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
    int n = sz(s), ans = 1;
    int start = 0;

    rep(i, 0, n)
    {
        int l = i - 1, r = i + 1, odd = 1;

        while (l >= 0 and r < n and s[l] == s[r])
        {
            odd += 2;

            if (ans < odd)
            {
                start = l;
                ans = odd;
            }

            l--;
            r++;
        }
        ans = max(ans, odd);
        // even case;

        l = i - 1, r = i;
        int even = 0;

        while (l >= 0 and r < n and s[l] == s[r])
        {
            even += 2;

            if (ans < even)
            {
                start = l;
                ans = even;
            }

            l--;
            r++;
        }
        ans = max(ans, even);

    }

    cout << s.substr(start, ans) << endl;
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

