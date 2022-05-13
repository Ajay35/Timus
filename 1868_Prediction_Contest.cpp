
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

const int N = 105;
char win[15][1005];

//int getlong(char )

bool checkname(char*x, string y)
{
    int u = strlen(x);
    //cout<<strlen(x)<<" "<<y.length()<<" ";
    int v = y.length();
    //cout<<x<<endl<<y<<endl;
    if (u != v) return 0;
    else
    {
        for (int i = 0; i < u; i++)
        {
            if (x[i] != y[i]) return 0;
        }
        return 1;
    }
}

void solve()
{
    for (int i = 0; i < 12; i++)
        cin >> win[i];
    int n, sum[105];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m, right = 0;
        cin >> m;
        while (m--)
        {
            string name, medal, symbol;
            cin >> name >> symbol >> medal;
            //cout<<medal.length()<<" ";
            switch (medal[0])
            {
            case 'g': for (int i = 0; i < 4; i++)
                {
                    if (checkname(win[i], name))
                    {
                        right++;
                        break;
                    }
                } break;
            case 's': for (int i = 4; i < 8; i++)
                {
                    if (checkname(win[i], name))
                    {
                        right++;
                        break;
                    }
                } break;
            case 'b': for (int i = 8; i < 12; i++)
                {
                    if (checkname(win[i], name))
                    {
                        right++;
                        break;
                    }
                } break;
            }
            sum[i] = right;
        }
    }
    int maxn = 0, h = 0;
    for (int i = 0; i < n; i++)
        maxn = max(maxn, sum[i]);
    for (int i = 0; i < n; i++)
        if (sum[i] == maxn)
            h++;
    //for(int i=0;i<n;i++)
    //cout<<sum[i]<<" ";
    cout << h * 5;
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

