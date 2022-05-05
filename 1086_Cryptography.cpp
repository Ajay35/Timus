
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
//#define endl        '\n'
#define hell        1000000007
#define rep(i,a,b)  for(int i=a;i<b;i++)
using namespace std;

const int N = 2e5;
bool a[N + 5];
vi primes;

void solve()
{
    int n;
    cin >> n;
    cout << primes[n - 1] << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;


    for (int i = 2; i <= N; i++)
    {
        a[i] = true;
    }


    for (int i = 2; i * i <= N; i++)
    {
        if (a[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                a[j] = false;
            }
        }
    }

    for (int i = 2; i <= N; i++)
    {
        if (a[i])
        {
            primes.pb(i);
        }
    }


    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}

