
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

int n;
int cont[37];

void f(int i, int sum)
{
    if (i == n / 2)
    {
        ++cont[sum];
    }
    else
    {
        for (int j = 0; j < 10; ++j)
        {
            f(i + 1, sum + j);
        }
    }
}

void solve()
{
    cin >> n;

    f(0, 0);

    int ans = 0;

    for (int i = 0; i <= 36; ++i)
    {
        ans += cont[i] * cont[i];
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

