
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


void An(int i, int n)
{
    if (i > n)
        return;
    cout << "sin(" << i;
    if (i & 1 and i < n)
        cout << "-";
    else if (i % 2 == 0 and i < n)
        cout << "+";
    An(i + 1, n);
    cout << ")";
}

void Sn(int m, int& n)
{
    if (m == 0)
        return;
    if (m > 1)
        cout << "(";
    Sn(m - 1, n);
    An(1, m);
    cout << "+" << n;
    if (n > 1)
        cout << ")";
    n--;
}

void solve()
{
    int n;
    cin >> n;
    Sn(n, n);
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

