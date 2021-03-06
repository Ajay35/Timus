
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

int king(int N, int row, int col)
{
    int answer = 0;

    for (int dr = -1; dr <= 1; dr++)
    {
        for (int dc = -1; dc <= 1; dc++)
        {
            if (!(dr == 0 && dc == 0))
            {
                if (row + dr > 0 && row + dr <= N && col + dc > 0 && col + dc <= N)
                {
                    answer++;
                }
            }
        }
    }

    return answer;
}

int knight(int N, int row, int col)
{
    int answer = 0;

    for (int dr = -1; dr <= 1; dr += 2)
    {
        for (int dc = -1; dc <= 1; dc += 2)
        {
            if (row + dr * 2 > 0 && row + dr * 2 <= N && col + dc > 0 && col + dc <= N)
            {
                answer++;
            }

            if (row + dr > 0 && row + dr <= N && col + dc * 2 > 0 && col + dc * 2 <= N)
            {
                answer++;
            }
        }
    }

    return answer;
}

int bishop(int N, int row, int col)
{
    int answer = 0;

    answer += min(N - row, col - 1);
    answer += min(N - col, row - 1);
    answer += min(N - col, N - row);
    answer += min(col - 1, row - 1);

    return answer;
}

int rook(int N, int row, int col)
{
    return 2 * (N - 1);
}

int queen(int N, int row, int col)
{
    return bishop(N, row, col) + rook(N, row, col);
}

void solve()
{
    int N, row, col;

    cin >> N >> row >> col;
    cout << "King: " << king(N, row, col) << endl;
    cout << "Knight: " << knight(N, row, col) << endl;
    cout << "Bishop: " << bishop(N, row, col) << endl;
    cout << "Rook: " << rook(N, row, col) << endl;
    cout << "Queen: " << queen(N, row, col) << endl;
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

