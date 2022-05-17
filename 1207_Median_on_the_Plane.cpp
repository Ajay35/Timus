
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


// polar angle sorting....

struct point
{
    ll x, y, ind;
} points[10001];


bool cmp(point a, point b)
{
    point vec1, vec2;
    vec1.x = a.x - points[0].x; vec1.y = a.y - points[0].y;
    vec2.x = b.x - points[0].x; vec2.y = b.y - points[0].y;

    return vec1.x * vec2.y - vec2.x * vec1.y > 0;
}


void solve()
{
    int n;
    cin >> n;

    cin >> points[0].x >> points[0].y;
    points[0].ind = 0;

    for (int i = 1; i < n; i ++)
    {
        cin >> points[i].x >> points[i].y;
        points[i].ind = i;

        if (points[i].x < points[0].x)
        {
            swap(points[0], points[i]);
        }
        else if (points[i].x == points[0].x && points[i].y < points[0].y)
        {
            swap(points[0], points[i]);
        }
    }

    sort(points + 1, points + n, cmp);

    cout << points[0].ind + 1 << " " << points[n / 2].ind + 1 << endl;
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

