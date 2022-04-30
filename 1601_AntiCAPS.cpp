
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
    char c;
    bool first = true;

    while ((c = getchar()) != EOF)
    {
        if (c == '.' || c == '!' || c == '?')
        {
            putchar(c);
            first = true;
        }
        else
        {
            if (c >= 'a' && c <= 'z')
            {
                if (first)
                    putchar(c - 'a' + 'A');
                else
                    putchar(c);

                first = false;
            }
            else if (c >= 'A' && c <= 'Z')
            {
                if (first)
                    putchar(c);
                else
                    putchar(c - 'A' + 'a');

                first = false;
            }
            else
                putchar(c);
        }
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

