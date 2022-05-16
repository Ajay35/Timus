
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
    int n;
    cin >> n;
    vector<int> v;
    long long sum = 0;

    for (int i = 0; i < n; i++) 
    {
        int h;
        cin >> h;
        sum += h;
        v.push_back(h);
    }
    long double drink = 1.0 * sum / (n + 1);
    long double s = 0;
    vector<long double> more;

    for (int i = 0; i < n; i++) 
    {
        if (v[i] - drink > 0 - 1e-9) 
        {
            more.push_back(v[i] - drink);
            s += more[i];
        } 
        else
            more.push_back(0);
    }

    for (int i = 0; i < n; i++) 
    {
        cout << int(more[i] * 100 / s) << ' ';
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

