
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
    int n, m;
    unordered_map<int, int> m1, m2;

    cin >> n;

    rep(i, 0, n)
    {
        int p;
        cin >> p;
        m1[p]++;
    }

    cin >> m;

    rep(i, 0, m)
    {
        int p;
        cin >> p;
        m2[p]++;
    }

    for (auto it : m1)
    {
        int num = it.x;

        if (m2.find(10000 - num) != m2.end())
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
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

