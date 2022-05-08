
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

    int i = 0, j = n - 1;

    for (; i <= n / 2 and i < j; i++, j--)
    {
        if (s[i] >= s[j])
        {
            s[j] = s[i];
        }
        else
        {
            int k = j - 1;

            while (s[k] == '9')
            {
                s[k--] = '0';
            }

            s[k]++;
            s[j] = s[i];
        }
    }
    cout << s << endl;
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

