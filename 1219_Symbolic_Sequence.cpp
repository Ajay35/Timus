
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
    for (int n = 1000000;;)
    {
        for (char ch1 = 'a'; ch1 <= 'z'; ch1++)
        {
            for (char ch2 = 'a'; ch2 <= 'z'; ch2++)
            {
                for (char ch3 = 'a'; ch3 <= 'z'; ch3++)
                {
                    if (n > 0)
                    {
                        cout << ch1;
                        n--;
                    }

                    if (n > 0)
                    {
                        cout << ch2;
                        n--;
                    }

                    if (n > 0)
                    {
                        cout << ch3;
                        n--;
                    }
                }
            }

            if (n == 0) 
                break;
        }

        if (n == 0) 
            break;
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

