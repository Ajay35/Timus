
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

class TreeNode
{
public:
    int val;
    TreeNode* le;
    TreeNode* ri;

    TreeNode(int v)
    {
        val = v;
        le = nullptr;
        ri = nullptr;
    }
};


void dfs(vi& a, int l, int r)
{
    if (l == r)
    {
        cout << a[r] << endl;
        return;
    }

    if (l > r)
        return;

    for (int i = l; i <= r; i++)
    {
        if (a[i] > a[r])
        {
            dfs(a, i, r - 1);
            dfs(a, l, i - 1);
            cout << a[r] << endl;
            break;
        }

        if (a[i] == a[r])
        {
            dfs(a, l, i - 1);
            cout << a[r] << endl;
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    vi a(n + 1);

    rep(i, 1, n + 1)
    {
        cin >> a[i];
    }

    dfs(a, 1, n);

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

