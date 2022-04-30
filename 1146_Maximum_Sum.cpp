
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

int kadaneAlgorithm(vi& a, int& start, int& end, int n)
{
    int currSum = 0, maxSum = INT_MIN;
    end = -1;
    int currStart = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += a[i];

        if (currSum < 0)
        {
            currSum = 0;
            currStart = i + 1;
        }
        else if (maxSum < currSum)
        {
            maxSum = currSum;
            start = currStart;
            end = i;
        }
    }
    if (end != -1)
    {
        return maxSum;
    }

    int index = max_element(a.begin(), a.end()) - a.begin();
    start = end = index;
    maxSum = *max_element(a.begin(), a.end());
    return maxSum;
}
void maxMatrixSum(vector<vi>& matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int matrixLeft = -1, matrixRight = -1, matrixTop = -1, matrixBottom = -1;
    int maxSum = INT_MIN;
    vi stored(n);
    int sum, start, end;

    for (int left = 0; left < m; left++)
    {
        stored.assign(n, 0);

        for (int right = left; right < m; right++)
        {
            for (int i = 0; i < n; i++)
            {
                stored[i] += matrix[i][right];
            }

            sum = kadaneAlgorithm(stored, start, end, n);

            if (maxSum < sum)
            {
                maxSum = sum;
                matrixLeft = left;
                matrixRight = right;
                matrixTop = start;
                matrixBottom = end;
            }
        }
    }
    cout << maxSum << endl;
}
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<vi> a(n, vi(n));

    rep(i, 0, n)
    {
        rep(j, 0, n)
        {
            cin >> a[i][j];
        }
    }
    /*
    rep(i, 0, n)
    {
        rep(j, 0, n)
        {
            if (i > 0)
                a[i][j] += a[i - 1][j];
            if (j > 0)
                a[i][j] += a[i][j - 1];
            if (i > 0 and j > 0)
                a[i][j] -= a[i - 1][j - 1];
        }
    }

    int ans = INT_MIN;

    rep(i, 0, n)
    {
        rep(j, 0, n)
        {
            rep(k, i, n)
            {
                rep(l, j, n)
                {
                    int sum = a[k][l];
                    if (i > 0)
                        sum -= a[i - 1][l];
                    if (j > 0)
                        sum -= a[k][j - 1];
                    if (i > 0 and j > 0)
                        sum += a[i - 1][j - 1];

                    ans = max(ans, sum);
                }
            }
        }
    }
    */
    maxMatrixSum(a);
    //cout << ans << endl;
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

