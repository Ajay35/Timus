
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

int dx[8] = {2, 1, -2, 1, -1, 2, -2, -1};
int dy[8] = {1, 2, 1, -2, 2, -1, -1, -2};

void solve()
{
    string s;
    cin >> s;
    int px = s[0] - 'a' + 1;
    int py = s[1] - '0';
    int ans = 0;
    
    for (int i = 0; i < 8; i++)
    {
        int xx = px + dx[i];
        int yy = py + dy[i];

        if (xx >= 1 and xx <= 8 and yy >= 1 and yy <= 8)
        {
            ans++;
        }
    }

    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

