
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

double get_max(int type, double len)
{
    if (type == 1)
        return 2 * len;
    else if (type == 2)
        return sqrt(2) * len;
    return len;
}
double get_min(int type, double len)
{
    if (type == 1)
        return 2 * len;
    else if (type == 2)
        return len;
    return sqrt(3.0) / 2 * len;
}


void solve()
{
    int type;
    double len;
    cin >> type >> len;
    double max_length = get_max(type, len);
    int n, sum = 0;
    cin >> n;

    rep(i, 0, n)
    {
        cin >> type >> len;
        double min_length = get_min(type, len);

        if (min_length <= max_length)
        {
            ++sum;
        }
    }

    cout << sum << endl;

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

