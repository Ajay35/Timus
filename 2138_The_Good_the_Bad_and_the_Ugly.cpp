
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

long long n;

void solve()
{
    const int k = 256;
    string g = "GOOD";
    string b = "BAD";
    string str;
    cin >> str;
    cin >> n;

    if ( n == 0)
    {
        cout << "0" << endl;
        return;
    }

    int arr2[4];
    int bit = 1;
    int arr[4];
    long long int l = 0;
    memset(arr, 0, sizeof(arr));
    memset(arr2, 0, sizeof(arr2));

    for (int i = 3; i >= 0 ; i--)
    {
        long long int j = pow(k, i);

        for (int C = 1; C <= 255; C++)
        {
            long long int h = C * j;

            if ( n >= h)
            {
                l = n % h;

                if (l == 0 && i != 0)
                {
                    arr[i] = 1;
                    bit = 1;
                    n = n - bit * h;
                    break;
                }
                else if ( i == 0 && n < 255)
                {
                    arr[i] = n;
                    break;
                }
                else
                {
                    arr[i] = n / h;
                    bit = n / h;
                    n = n - bit * h;
                    break;
                }

            }
            else break;
        }
    }

    if (str == g)
    {
        long long sum = 0;

        for (int i = 0, m = 3; i <= 3, m >= 0; i++, m--)
        {
            sum += pow(k, m) * arr[i];
        }

        cout << sum << endl;
    }
    else if ( str == b)
    {
        long long int sum = 0;

        for (int i = 0, m = 3; i <= 3, m >= 0; i++, m--)
        {
            sum += pow(k, m) * arr[i];
        }

        cout << sum << endl;;
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

