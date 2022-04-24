
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
    int first_lock, second_lock;
    cin >> first_lock >> second_lock;
    bool first_lck = true;
    for (int thief_code = 0; thief_code <= 9999; thief_code++)
    {
        if (thief_code > first_lock and thief_code > second_lock)
            break;
        if (first_lck)
        {
            if (thief_code == first_lock)
            {
                cout << "yes" << endl;
                return;
            }
        }
        else
        {
            if (thief_code == second_lock)
            {
                cout << "yes" << endl;
                return;
            }
        }

        first_lck = !first_lck;
    }
    cout << "no" << endl;
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

