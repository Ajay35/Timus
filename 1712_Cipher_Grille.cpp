
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


void rotate(vector<string>& a, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = i; j < n - i - 1; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[n - 1 - j][i];
            a[n - 1 - j][i] = a[n - 1 - i][n - 1 - j];
            a[n - 1 - i][n - 1 - j] = a[j][n - 1 - i];
            a[j][n - 1 - i] = temp;
        }
    }
}

void solve()
{
    vector<string> grid(4);
    vector<string> password(4);

    rep(i, 0, 4)
    {
        cin >> grid[i];
    }

    rep(i, 0, 4)
    {
        cin >> password[i];
    }
    vector<char> ans(16);
    int ind = 0;

    rep(i, 0, 4)
    {
        rep(j, 0, 4)
        {
            rep(k, 0, 4)
            {
                if (grid[j][k] != '.')
                {
                    ans[ind++] = password[j][k];
                }
            }
        }

        rotate(grid, 4);
    }
    rep(i, 0, 16)
    {
        cout << ans[i];
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

