
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
    int N, id[16];
    string s[16][3];

    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> s[i][j];
        }

        sort(s[i], s[i] + 3);
    }

    for (int i = 0; i < N; ++i)
    {
        cin >> id[i];
        --id[i];
    }

    int chosen[16];
    bool found = true;

    chosen[0] = 0;

    for (int i = 1; i < N; ++i)
    {
        found = false;

        for (int j = 0; j < 3; ++j)
        {
            if (s[id[i]][j] > s[id[i - 1]][chosen[i - 1]])
            {
                chosen[i] = j;
                found = true;
                break;
            }
        }

        if (!found) break;
    }

    if (!found)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    else
    {
        for (int i = 0; i < N; ++i)
        {
            cout << s[id[i]][chosen[i]] << endl;
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

