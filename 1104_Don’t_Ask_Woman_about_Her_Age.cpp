
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

int ctoi(char c)
{
    if(c >= '0' && c <='9')
        return c - '0';
    else
        return c - 'A' + 10;
}


int getRemainder(std::string s, int n)
{
    int c = 1;
    int r = 0;
    
    for(int i = s.size() - 1; i >= 0; i--)
    {
        r = (r + ctoi(s[i]) * c) % (n - 1);
        c = (c * n) % (n - 1);
    }
    return r;
}

int maxChar(string s)
{
    int max = 0;

    for(char c: s)
    {
        max = ctoi(c) > max ? ctoi(c) : max;
    }
    return max;
}

void solve()
{
    string s;
    cin >> s;
    int min = maxChar(s);
    
    if(min == 0)
    {
        cout << "2" << endl;
        return;
    }
    
    for(int i = min + 1; i <= 36; i++)
    {
        if(getRemainder(s,i) == 0)
        {
            cout << i << endl;
            return;
        }
    }

    cout << "No solution." << endl;
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

