
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
    string phone;
    int price;
    int maxCount = 0;
    unordered_map<string, int> phoneCount;
    unordered_map<string, int> phonePrice;

    for (int i = 0; i < 6; i++)
    {
        cin >> phone >> phone >> price;

        phoneCount[phone]++;
        maxCount = max(maxCount, phoneCount[phone]);

        if (phonePrice.count(phone) == 0)
        {
            phonePrice[phone] = price;
        }

        phonePrice[phone] = min(phonePrice[phone], price);
    }

    string answer;
    int minPrice = INT_MAX;

    for (auto it = phoneCount.begin(); it != phoneCount.end(); it++)
    {
        phone = it->second == maxCount ? it->first : "";

        if (!phone.empty() && phonePrice[phone] < minPrice)
        {
            minPrice = phonePrice[phone];
            answer = phone;
        }
    }

    cout << answer << endl;

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

