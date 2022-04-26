
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

bool ishappy(int N)
{
    int A = 0, B = 0;

    for (int i = 0; i < 3; i++)
    {
        A += N % 10;
        N /= 10;
    }
    for (int i = 0; i < 3; i++)
    {
        B += N % 10;
        N /= 10;
    }

    return A == B;
}

void solve()
{
    int N;
    cin >> N;
    
    if (ishappy(N + 1) || ishappy(N - 1))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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

