
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

bool notgood(int p)
{
    while (p > 0)
    {
        int d = (p % 10);
        if (d != 0 and d != 1 and d != 8 and d != 6 and d != 9)
            return true;
        p = p / 10;
    }
    return false;
}

bool ok(vi& a, int n)
{
    rep(i, 0, n)
    {
        if (notgood(a[i]))
        {
            return false;
        }
    }
    return true;
}

void overturn(vi& a, int n)
{
    vector<string> ans;
    rep(i, 0, n)
    {
        string num = to_string(a[i]);
        reverse(all(num));
        if (num[0] == '9')
            num[0] = '6';
        else if (num[0] == '6')
            num[0] = '9';
        if (num[1] == '9')
            num[1] = '6';
        else if (num[1] == '6')
            num[1] = '9';

        ans.pb(num);
    }

    reverse(all(ans));
    rep(i, 0, n)
    {
        cout << ans[i] << " ";
    }

}

void solve()
{
    int n;
    cin >> n;

    for (int i = 10; i + n - 1 < 100; i++)
    {
        vi temp(n);
        int ind = n - 1;
        int num = i + n - 1;

        while (ind >= 0)
        {
            temp[ind--] = num--;
        }

        if (ok(temp, n))
        {
            overturn(temp, n);
            return;
        }
    }

    cout << "Glupenky Pierre" << endl;
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

