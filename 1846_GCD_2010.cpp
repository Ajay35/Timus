
/* Ajay Jadhav */

#include <bits/stdc++.h>
#include <numeric>

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

const int N = 1e5;
int n;
int a[N + 5], tree[N * 4];

map<int, vi> cnt;


int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}


void update(int node, int b, int e, int i, int v)
{
    if (i < b || i > e)
        return;
    if (b == e)
    {
        tree[node] = v;
        return;
    }

    int left = 2 * node;
    int right = 2 * node + 1;
    int mid = (b + e) / 2;
    update(left, b, mid, i, v);
    update(right, mid + 1, e, i, v);
    tree[node] = gcd(tree[left], tree[right]);
}

void solve()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char ch;
        int num;
        cin >> ch >> num;

        if (ch == '-')
        {
            int ind = cnt[num].back();
            cnt[num].pop_back();
            update(1, 1, n, ind, 0);
        }
        else
        {
            cnt[num].push_back(i + 1);
            update(1, 1, n, i + 1, num);
        }

        if (tree[1] == 0)
        {
            tree[1] = 1;
        }

        cout << tree[1] << endl;
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

