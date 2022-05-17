
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
    int cs[35][35][35];
    vector<int> v[35][35];
    int inLevel[35];

    for (int i = 1; i <= n; ++i)
    {
        int k;
        cin >> k;
        inLevel[i] = k;

        for (int j = 1; j <= k; ++j)
        {
            while (true)
            {
                int a, b;
                cin >> a;
                if (a == 0)
                {
                    break;
                }

                cin >> b;
                v[i][j].push_back(a);
                cs[i][j][a] = b;
            }
        }

        if (i == n)
            break;
        char x;
        cin >> x;
    }

    int dist[35][35];
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= inLevel[i]; ++j)
        {
            dist[i][j] = 1e9;
        }
    }

    dist[0][1] = 0;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= inLevel[i]; ++j)
        {
            for (int k = 0; k < v[i][j].size(); ++k)
            {
                int pl = v[i][j][k];

                if (dist[i][j] > dist[i - 1][pl] + cs[i][j][pl])
                {
                    dist[i][j] = dist[i - 1][pl] + cs[i][j][pl];
                }
            }
        }
    }

    int mn = 1e9;

    for (int i = 1; i <= inLevel[n]; ++i)
    {
        mn = min(mn, dist[n][i]);
    }

    cout << mn;
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

