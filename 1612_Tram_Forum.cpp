
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
    string word = "";
    int tramCount = 0;
    int trolleyCount = 0;
    int busCount = 0;

    while (cin >> word)
    {
        int pos = 0;
        int length = 0;
        string word1 = "";

        while (word.size() != 0)
        {
            pos = word.find_first_of(".,:!?-");

            if (pos != -1)
            {
                length = word.size();
                word1 = word.substr(0, pos);
                word = word.substr(pos + 1, word.size());
            }
            else
            {
                word1 = word;
                word = "";
            }
            if (word1.substr(0, 4) == "tram" && word1.size() == 4)
                tramCount ++;   
            if (word1.substr(0, 10) == "trolleybus" && word1.size() == 10)
                trolleyCount ++;
            if (word1.substr(0, 3) == "bus" && word1.size() == 4)
                busCount ++;
        }
    }
    if (tramCount > trolleyCount)
        cout << "Tram driver" << endl;
    else if (trolleyCount > tramCount)
        cout << "Trolleybus driver" << endl;
    else
        cout << "Bus driver" << endl;
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

