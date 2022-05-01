
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
    int c = 0;

    vi steps(54322);

    int total_steps = 0;

    steps[3] = 1;

    for (int i = 5; i <= 54321; i += 2)
    {
        steps[i] = 1 + steps[i - 2];
    }

    rep(i, 0, n)
    {
        int p;
        cin >> p;
        total_steps += steps[p];
    }

    if (total_steps & 1)
    {
        cout << "Daenerys" << endl;
    }
    else
    {
        cout << "Stannis" << endl;
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

