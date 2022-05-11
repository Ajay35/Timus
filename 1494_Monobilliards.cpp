
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

bool validateStackSequence(vi& popped, int n)
{
    int j = 0;
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        st.push(i + 1);

        while (!st.empty() && j < n && st.top() == popped[j])
        {
            st.pop();
            j++;
        }
    }

    return j == n;
}

void solve()
{
    int n;
    cin >> n;
    vi b(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    if (validateStackSequence(b, n))
    {
        cout << "Not a proof" << endl;
    }
    else
    {
        cout << "Cheater" << endl;
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

