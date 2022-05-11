
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
    int prime_powers[] = { 0 , 2 , 3 , 5 , 7 , 13 , 17 , 19 , 31 , 61 , 89 , 107 , 127, 521 , 607 , 1279 , 2203 , 2281 , 3217 , 4253 , 4423 ,
                           9689 , 9941 , 11213 , 19937 , 21701 , 23209 , 44497 , 86243 , 110503 , 132049 ,
                           216091 , 756839 , 859433 , 1257787 , 1398269 , 2976221 , 3021377 , 6972593
                         };
    int n;
    cin>>n;
    cout<<prime_powers[n]<<endl;

}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}

