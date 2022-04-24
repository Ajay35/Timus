
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

void fill_matrix(vector<vi>& a, int n, int rr, int cc, int& cnt)
{
    while (rr < n and cc < n)
    {
        a[rr++][cc++] = cnt++;
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<vi> a(n, vi(n));
    int r = 0, c = n - 1;
    int cnt = 1;
    while (c > 0 or r < n)
    {
        if (c > 0)
        {
            int rr = r;
            int cc = c;
            fill_matrix(a, n, rr, cc, cnt);
        }
        else if (c == 0)
        {
            int rr = r;
            int cc = c;
            fill_matrix(a, n, rr, cc, cnt);
        }
        else
            break;

        if (c > 0)
            c--;
        else
            r++;
    }

    rep(i, 0, n)
    {
        rep(j, 0, n)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
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

