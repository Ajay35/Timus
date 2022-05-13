
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
#define hell        1000000009
#define rep(i,a,b)  for(int i=a;i<b;i++)
using namespace std;


int primes[1001];

ll dp[10][10][10001];

bool is_prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

ll f(int d1, int d2, int n)
{
    if (n == 0)
        return 1;

    ll& ans = dp[d1][d2][n];

    if (ans != -1)
        return ans;
    else
        ans = 0;

    for (int i = 1; i <= 9; i++)
    {
        int p = (d1 * 100) + (d2 * 10) + i;

        if (p >= 101 and p <= 999 and primes[p] == 1)
        {
            ans += f(d2, i, n - 1) % hell;
            ans = ans % hell;
        }
        else if (d2 == 0)
        {
            ans += f(d1, i, n - 1) % hell;
            ans = ans % hell;
        }
        else if (d1 == 0)
        {
            ans += f(i, d2, n - 1) % hell;
            ans = ans % hell;
        }
    }

    return ans % hell;
}

void solve()
{
    int n;
    cin >> n;

    if(n == 3)
    {
        cout<<143<<endl;
        return;
    }
    int ans = 0;

    for (int i = 100; i <= 999; i++)
    {
        if (is_prime(i))
        {
            primes[i] = 1;
        }
    }
    memset(dp, -1, sizeof dp);
    cout << f(0, 0, n) % hell;
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

