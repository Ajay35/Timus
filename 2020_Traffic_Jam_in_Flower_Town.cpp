
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
    string c1, c2;
    cin >> c1 >> c2;
    int cnt1 = 0, cnt2 = 0, time = 0;

    while (cnt1 < (int)c1.length() || cnt2 < (int)c2.length())
    {
        if (cnt1 == (int)c1.length())
        {
            cnt2++; time++; continue;
        }
        if (cnt2 == (int)c2.length())
        {
            cnt1++; 
            time++; 
            continue;
        }
        if (c1[cnt1] == 'L')
        {
            if (c2[cnt2] == 'L')
            {
                cnt1++; cnt2++; time++; continue;
            }
            else
            {
                cnt2++; time++; continue;
            }
        }
        else
        {
            if (c2[cnt2] == 'L')
            {
                cnt1++; time++; continue;
            }
            else
            {
                cnt1++; cnt2++; time++; continue;
            }
        }
    }
    cout << time << endl;
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

