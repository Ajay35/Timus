
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


double get_triviality(ll num, ll sum)
{
    if(num == 1)
        return 0.0;

    return ((double) sum) / ((double) num);
}

void solve()
{
    int l, r;
    cin >> l >> r;
    vector<long long> divisors(r + 2, 1);
    
    for (ll i = 2; i <= r; i++)
    {
        for (ll j = 2 * i; j <= r; j += i)
        {
            divisors[j] += i;
        }
    }


    long double min_triviality = 1e18;
    int ans = l;

    for (int i = l; i <= r; i++)
    {
        //cout<<i<<" "<<divisors[i]<<" "<<get_triviality(i, divisors[i])<<endl;

        if (min_triviality > get_triviality(i, divisors[i]))
        {
            min_triviality = get_triviality(i, divisors[i]);
            ans = i;
        }
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

