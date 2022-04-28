
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
    int w1, w2, n1, n2;
    cin >> w1 >> w2 >> n1 >> n2;

    if (n1 <= n2)
        cout << (n2 - n1) * 2 * w2 + (n2 - n1 - 1) * w1 << endl;
    else
        cout << (n1 - n2) * 2 * w2 + (n1 - n2 + 1)*w1 << endl;;
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

