
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
    ll n;
    cin>>n;

    int rt = sqrt(n), psum = 0;
    ll  curr = n;
    bool ans = true;

    for (int i = 2; i <= curr; ++i)
    {
        while (curr % i == 0)
        {
            ++psum;
            curr /= i;
        }

        if (psum > 20)
        {
            ans = false;
            break;
        }
        else if (psum == 20 )
        {
            if (curr != 1)
                ans = false;
            break;
        }
        else if (psum == 19)
        {
            if ((i + 1) * (i + 1) > curr)
            {
                if (i + 1 <= curr)
                    break;
                else
                {
                    ans = false;
                    break;
                }
            }
        }

        if (pow(i + 1, 20 - psum) > curr)
        {
            ans = false;
            break;
        }
    }

    if (ans and curr != 1)
    {
        ++psum;
    }

    if (psum != 20)
    {
        ans = false;
    }

    puts(ans ? "Yes" : "No");
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

