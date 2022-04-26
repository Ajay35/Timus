
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

map<string, int> id;
vector<int> adj[300];
int dist[300];

void bfs()
{
    int Q[300], head = 0, tail = 0;

    memset(dist, -1, sizeof(dist));

    if (id.find("Isenbaev") != id.end()) 
    {
        int s = id["Isenbaev"];

        dist[s] = 0;
        Q[tail] = s;
        ++tail;

        while (head < tail) 
        {
            int cur = Q[head];
            ++head;

            for (int i = adj[cur].size() - 1; i >= 0; --i) 
            {
                int nxt = adj[cur][i];

                if (dist[nxt] == -1) 
                {
                    dist[nxt] = dist[cur] + 1;
                    Q[tail] = nxt;
                    ++tail;
                }
            }
        }
    }
}

void solve()
{
    int N;

    cin >> N;

    int V = 0;
    string s1, s2, s3;

    for (int i = 0; i < N; ++i) 
    {
        cin >> s1 >> s2 >> s3;

        if (id.find(s1) == id.end()) 
            id[s1] = V++;
        if (id.find(s2) == id.end()) 
            id[s2] = V++;
        if (id.find(s3) == id.end()) 
            id[s3] = V++;

        int a = id[s1], b = id[s2], c = id[s3];

        adj[a].push_back(b); 
        adj[a].push_back(c);
        adj[b].push_back(a); 
        adj[b].push_back(c);
        adj[c].push_back(a); 
        adj[c].push_back(b);
    }

    bfs();

    for (map<string, int>::iterator it = id.begin(); it != id.end(); ++it) 
    {
        cout << it->first << " ";

        if (dist[it->second] == -1) 
            cout << "undefined" << endl;
        else 
            cout << dist[it->second] << endl;
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

