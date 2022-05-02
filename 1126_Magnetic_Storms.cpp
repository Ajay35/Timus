
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
#define hell        1000000007
#define rep(i,a,b)  for(int i=a;i<b;i++)
using namespace std;

void solve()
{
    // maximum in all k size sub arrays.
    int k, n;
    cin >> k;
    vi a;
    int p;

    while (cin >> p)
    {
        if (p == -1)
            break;

        a.pb(p);
    }

    n = sz(a);

    deque<int> dq;
    vi ans(n - k + 1);
    int ind = 0;

    rep(i, 0, n)
    {
        if (!dq.empty() and dq.front() == i - k)
        {
            dq.pop_front();
        }

        while (!dq.empty() and a[dq.back()] < a[i])
        {
            dq.pop_back();
        }

        dq.push_back(i);


        if(i >= k - 1)
        {
            ans[ind++] = a[dq.front()];    
        }
        

    }


    rep(i, 0, sz(ans))
    {
        cout << ans[i] << endl;
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

