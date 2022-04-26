
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

class player
{
public:
    int ind, id, score;

};

void solve()
{
    int n;
    cin >> n;
    vector<player> p(n);
    rep(i, 0, n)
    {
        int id, score;
        cin >> id >> score;
        player cur;
        cur.ind = i + 1;
        cur.id = id;
        cur.score = score;
        p[i] = cur;
    }
    sort(all(p), [&](player & a, player & b) {
        if (a.score == b.score)
            return a.ind < b.ind;
        return a.score > b.score;
    });
    rep(i, 0, n)
    {
        cout << p[i].id << " " << p[i].score << endl;
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

