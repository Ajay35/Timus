
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
    int n, k;
    int a[147], b[147][147];
    while (~scanf("%d%d", &n, &k))
    {
        if(n == 0 and k == 0)
            break;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int c_num = (ceil)(n / (k * 1.0));
        int ss = c_num * k - n;
        int lc = 0, lr = 0;
        for (int i = 0; i < n; i++)
        {
            b[lr][lc] = a[i];
            lr++;
            if (lr >= c_num)
            {
                lc++;
                lr = 0;
            }
        }
        int num = 0;
        int flag = 0;
        for (int i = 0; i < c_num; i++)
        {
            for (int j = 0; j < k; j++)
            {
                if (j == k - 1 && i >= c_num - ss)
                {
                    flag = 1;
                    printf("\n");
                    break;
                }
                printf("%4d", b[i][j]);
                flag = 0;
            }
            if (!flag)
                printf("\n");
        }
        printf("\n");
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

