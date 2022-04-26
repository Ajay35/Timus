
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
    int h, w, n;
    cin >> h >> w >> n;
    int cur_line = 1;
    int rem_w = w;
    int pages = 1;
    rep(i, 0, n)
    {
        string word;
        cin >> word;

        if (rem_w >= sz(word))
        {
            rem_w -= sz(word);

            if (sz(word) < w and i + 1 < n)
                rem_w--;
        }
        else
        {
            cur_line++;
            rem_w = w - sz(word);

            if (sz(word) < w and i + 1 < n)
                rem_w--;
        }

        //cout<<word<<" "<<cur_line<<endl;

    }
    if (rem_w == w)
        cur_line--;
    cout << cur_line / h  + ((cur_line % h) > 0) << endl;
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

