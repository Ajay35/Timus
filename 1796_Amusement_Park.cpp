
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
    vi a = {10, 50, 100, 500, 1000, 5000};
    vi b(6);

    int smallest_note = -1, sum = 0;

    rep(i, 0, 6)
    {
        cin >> b[i];

        if (b[i])
        {
            if (smallest_note == -1)
            {
                smallest_note = a[i];
            }
        }

        sum += (a[i] * b[i]);
    }

    int p;
    cin >> p;

    if (smallest_note == -1)
    {
        cout << 0;
    }
    else
    {

        vi ans;

        for (int i = sum - smallest_note + 1; i <= sum; i++)
        {
            if (i % p == 0)
            {
                ans.pb(i / p);
            }
        }

        cout << sz(ans) << endl;

        for (int i : ans)
        {
            cout << i << " ";
        }
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

