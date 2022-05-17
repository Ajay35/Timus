
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

bool valid(vector<char>& s, int& ans)
{
    int cnt = 0;

    for (int i = 0; i + 1 < sz(s); i++)
    {
        if (s[i] == '>' and s[i + 1] == '<')
        {
            s[i] = '<';
            s[i + 1] = '>';
            i++;
            cnt++;
        }
    }
    ans += cnt;
    return cnt == 0;
}

void solve()
{
    int ans = 0;
    int n;
    cin >> n;
    vector<char> s(n);
    rep(i, 0, n)
    {
        char ch;
        cin >> ch;
        s[i] = ch;
    }


    int counter = 0;
    int sum = 0;

    rep(i, 0, n)
    {
        if (s[i] == '<')
        {
            sum += (i - counter);
            counter++;
        }
    }

    cout << sum << endl;
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

