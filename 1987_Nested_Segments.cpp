
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

struct interval
{
    int l, r, ind;
};

void solve()
{
    int n, q;
    cin >> n;
    vector<interval> intervals(n);

    rep(i, 0, n)
    {
        interval cur;
        cin >> cur.l >> cur.r;
        cur.ind = i + 1;
        intervals[i] = cur;
    }

    sort(all(intervals), [&](interval & a, interval & b) {
        int size1 = a.r - a.l + 1;
        int size2 = b.r - b.l + 1;
        return size1 < size2;
    });

    cin >> q;
    multiset<pii> s;

    rep(i, 0, q)
    {
        int p;
        cin >> p;
        s.insert({p, i + 1});
    }

    vi ans(q + 1, -1);

    rep(i, 0, n)
    {
        int sx = intervals[i].l;
        int sy = intervals[i].r;
        int ind = intervals[i].ind;
        auto it = s.lower_bound({sx, 0});

        while (it != s.end() and (*it).x >= sx and (*it).x <= sy)
        {
            ans[(*it).y] = ind;
            s.erase(it);
            it = s.lower_bound({sx, 0});
        }
    }

    rep(i, 1, q + 1)
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

