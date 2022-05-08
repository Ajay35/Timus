
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
    ll A, B, C;
    ll X, Y, Z;

    cin >> A >> B >> C;
    cin >> X >> Y >> Z;

    ll remA = 0, remB = 0;

    if (X > A)
    {
        if (C >= (X - A))
        {
            C -= (X - A);
        }
        else
        {
            cout << "There are no miracles in life";
            return;
        }

    }
    else if (A > X)
    {
        remA += (A - X);
    }

    if (Y > B)
    {
        if (C >= (Y - B))
        {
            C -= (Y - B);
        }
        else
        {
            cout << "There are no miracles in life";
            return;
        }

    }
    else if (B > Y)
    {
        remB += (B - Y);
    }

    if ((Z <= (C + remA + remB)))
    {
        cout << "It is a kind of magic";
    }
    else
    {
        cout << "There are no miracles in life";
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

