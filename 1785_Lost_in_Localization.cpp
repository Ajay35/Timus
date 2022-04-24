
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
    if (n >= 1 and n <= 4)
    {
        cout << "few" << endl;
    }
    else if (n >= 1 and n <= 4)
    {

    }
    else if (n >= 5 and n <= 9)
    {
        cout << "several" << endl;
    }
    else if (n >= 10 and n <= 19)
    {
        cout << "pack" << endl;
    }
    else if (n >= 20 and n <= 49)
    {
        cout << "lots" << endl;
    }
    else if (n >= 50 and n <= 99)
    {
        cout << "horde" << endl;
    }
    else if (n >= 100 and n <= 249)
    {
        cout << "throng" << endl;
    }
    else if (n >= 250 and n <= 499)
    {
        cout << "swarm" << endl;
    }
    else if (n >= 500 and n <= 999)
    {
        cout << "zounds" << endl;
    }
    else
    {
        cout << "legion" << endl;
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

