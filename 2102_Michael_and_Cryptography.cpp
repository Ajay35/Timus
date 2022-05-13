
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

inline ll mod(const ll &a, const ll &b)
{
    return a - a / b * b;
}


void solve()
{
    ll n;
    cin >> n;
    if(n == 1) 
    {
        cout << "No" << endl;
    }
    else
    {
        ll sum = 0;
        bool f = true;
        ll temp, now;
        temp = (ll)((double)sqrt(n) + 1);
        now = n;

        for(ll i = 2; i <= temp; i++)
        {
            if(sum >= 20) break;
            if(mod(now, i) == 0)
            {
                while(mod(now, i) == 0)
                {
                    sum++;
                    now /= i;
                }
            }
            if(sum >= 20) 
                break;
            if(sum == 19)
            {
                if(pow(i + 1, 2) > now)
                {
                    if(i + 1 <= now) break;
                    else { f = false; break;}
                }
            }
            
            if((ll)pow(i + 1, 20 - sum) > now) 
            {
                f = false; break;
            }

        }
        if(f && now != 1){
            sum++;
        }


        if(!f) cout << "No" << endl;
        else if(sum == 20) cout << "Yes" << endl;
        else cout << "No" << endl;
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

