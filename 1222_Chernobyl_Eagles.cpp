
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

string longDivision(string number, int divisor)
{
    string ans;
    int idx = 0;
    int temp = number[idx] - '0';
    while (temp < divisor)
        temp = temp * 10 + (number[++idx] - '0');

    while (number.size() > idx) {
        ans += (temp / divisor) + '0';

        temp = (temp % divisor) * 10 + number[++idx] - '0';
    }

    if (ans.length() == 0)
        return "0";

    return ans;
}


string multiply(string num1, string num2)
{
    int len1 = num1.size();
    int len2 = num2.size();
    if (len1 == 0 || len2 == 0)
        return "0";
    vi result(len1 + len2, 0);

    int i_n1 = 0;
    int i_n2 = 0;

    for (int i = len1 - 1; i >= 0; i--)
    {
        int carry = 0;
        int n1 = num1[i] - '0';
        i_n2 = 0;

        for (int j = len2 - 1; j >= 0; j--)
        {
            int n2 = num2[j] - '0';
            int sum = n1 * n2 + result[i_n1 + i_n2] + carry;

            carry = sum / 10;
            result[i_n1 + i_n2] = sum % 10;

            i_n2++;
        }

        if (carry > 0)
            result[i_n1 + i_n2] += carry;

        i_n1++;
    }

    int i = result.size() - 1;
    while (i >= 0 && result[i] == 0)
        i--;


    if (i == -1)
        return "0";

    string s = "";

    while (i >= 0)
        s += std::to_string(result[i--]);

    return s;
}

string power(string xnum, string ynum)
{
    string res = "1";

    while (ynum != "0")
    {
        if (((ynum.back() - '0') % 2) == 1)
        {
            res = multiply(res, xnum);
        }

        ynum = longDivision(ynum, 2);
        xnum = multiply(xnum, xnum);
    }

    return res;
}


void solve()
{
    int n;
    cin >> n;
    int p = 0;

    string dp[3001];
    string nums[3001];

    for (int i = 0; i <= 3000; i++)
        nums[i] = to_string(i);

    dp[0] = "0";
    dp[1] = "1";
    dp[2] = "2";
    dp[3] = "2";

    for (int i = 4; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            dp[i] = max(dp[i], multiply(dp[j] , (multiply(nums[j] , nums[i - j]))));
        }
    }

    cout << dp[n] << endl;
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

