
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
    int n;
    cin >> n;

    map<string, string> users;
    map<string, string> logged;

    rep(i, 0, n)
    {
        string s1, s2, s3;
        cin >> s1;
        if (s1 == "register")
        {
            cin >> s2 >> s3;

            if (users.find(s2) != users.end())
            {
                cout << "fail: user already exists" << endl;
            }
            else
            {
                users[s2] = s3;
                cout << "success: new user added" << endl;
            }
        }
        else if (s1 == "login")
        {
            cin >> s2 >> s3;

            if (users.find(s2) == users.end())
            {
                cout << "fail: no such user" << endl;
            }
            else
            {
                if (users[s2] != s3)
                {
                    cout << "fail: incorrect password" << endl;
                }
                else if (logged.find(s2) != logged.end())
                {
                    cout << "fail: already logged in" << endl;
                }
                else
                {
                    logged[s2] = s3;
                    cout << "success: user logged in" << endl;
                }
            }
        }
        else
        {
            cin >> s2;

            if (users.find(s2) == users.end())
            {
                cout << "fail: no such user" << endl;
            }
            else if (logged.find(s2) == logged.end())
            {
                cout << "fail: already logged out" << endl;
            }
            else
            {
                logged.erase(s2);
                cout << "success: user logged out" << endl;
            }
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

