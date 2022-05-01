
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
    map <string, vector <string>> map1;

    string u, v;
    getline(cin, u);
    for (int i = 0; i < n; i++) {
        getline(cin, u);
        getline(cin, v);
        map1[v].push_back(u);
    }

    cout << "Slytherin:\n";

    for (auto el : map1["Slytherin"]) 
    {
        cout << el << "\n";
    }

    cout << "\n";

    cout << "Hufflepuff:\n";

    for (auto el : map1["Hufflepuff"]) 
    {
        cout << el << "\n";
    }

    cout << "\n";

    cout << "Gryffindor:\n";

    for (auto el : map1["Gryffindor"]) 
    {
        cout << el << "\n";
    }

    cout << "\n";
    cout << "Ravenclaw:\n";

    for (auto el : map1["Ravenclaw"]) 
    {
        cout << el << "\n";
    }
    
    cout << "\n";

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

