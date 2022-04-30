
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
        vector<vi> a(5, vi(5));

        rep(i, 0, 5)
        {
            rep(j, 0, 5)
            {
                cin >> a[i][j];
            }
        }

        vi b = {1, 2, 3};

        int ans = INT_MAX;
        vi ans_v(5);

        do
        {
            if (b[2] == 2)
            {
                continue;
            }

            int temp = a[0][b[0]] + a[b[2]][4];

            rep(i, 1, 3)
            {
                temp += a[b[i]][b[i - 1]];
            }

            if (ans > temp)
            {
                ans = temp;
                ans_v[0] = 1;
                ans_v[4] = 5;

                rep(i, 0, 3)
                {
                    ans_v[i + 1] = b[i] + 1;
                }

            }


        } while (next_permutation(all(b)));

        cout << ans << endl;

        rep(i, 0, 5)
        {
            cout << ans_v[i] << " ";
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

