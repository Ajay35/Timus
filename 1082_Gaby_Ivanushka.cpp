
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

const int N = 1001;

int A[N];

int Q(int l, int r)
{
    if (l >= r)
        return 0;

    int m;
    int c = 0;
    int x = A[l];
    int i = l - 1;
    int j = r + 1;
    while (true)
    {
        do
        {
            --j;
            ++c;
        }
        while (A[j] > x);

        do
        {
            ++i;
            ++c;
        }
        while (A[i] < x);

        if (i < j)
        {
            int t = A[i];
            A[i] = A[j];
            A[j] = t;
        }
        else
        {
            m = j;
            break;
        }
    }

    return c + Q(l, m) + Q(m + 1, r);
}

void solve()
{
    int n;
    cin >> n;
    /*int s1=Q(0, n - 1);
    int s2=(n * n + 3 * n - 4) / 2;
    cout<<s1<<" "<<s2<<endl;
    if (s1 == s2)
        printf("Vasilisa the Beautiful\n");
    else
        printf("Koschei the Immortal\n");
        */
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
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

