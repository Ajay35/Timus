
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
    priority_queue<double> pq;

    rep(i, 0, n)
    {
        double d;
        cin >> d;
        pq.push(d);
    }
    while (sz(pq) > 1)
    {
        double m1 = pq.top();
        pq.pop();
        double m2 = pq.top();
        pq.pop();
        double new_m = 2.0 * sqrt(m1 * m2);
        pq.push(new_m);
    }

    cout << fixed << setprecision(2) << pq.top() << endl;
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

