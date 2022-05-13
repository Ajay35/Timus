
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


#define MAXN 126000

template<typename Type>
class Heap
{
private:
    int  size;
    Type data[MAXN + 1];
    void siftdown(int pos);

public:
    Heap();
    void push(Type key);
    void pop();
    Type top();
    void make_heap();
    bool empty();
    void clear();
    int  get_size();
};

template<typename Type>
Heap<Type>::Heap()
{
    size = 0;
}

template<typename Type>
int Heap<Type>::get_size()
{
    return size;
}

template<typename Type>
bool Heap<Type>::empty()
{
    return size == 0;
}

template<typename Type>
void Heap<Type>::clear()
{
    size = 0;
}

template<typename Type>
void Heap<Type>::siftdown(int pos)
{
    while (pos << 1 <= size)
    {
        int t = pos << 1;
        if ((pos << 1) + 1 <= size && data[(pos << 1) + 1] < data[t] )
        {
            t = (pos << 1) + 1;
        }

        if (data[t] < data[pos] )
        {
            Type tmp = data[t]; data[t] = data[pos]; data[pos] = tmp;
            pos = t;
        }

        else
            break;
    }
}

template<typename Type>
void Heap<Type>::push(Type key)
{
    data[++size] = key;
    int pos = size;

    while (pos > 1 )
    {
        if (data[pos >> 1] > data[pos])
        {
            Type tmp = data[pos];
            data[pos] = data[pos >> 1]; data[pos >> 1] = tmp;
            pos >>= 1;
        }
        else
            break;
    }
}

template<typename Type>
void Heap<Type>::pop()
{
    Type tmp = data[1]; data[1] = data[size];
    data[size] = tmp; size--;
    siftdown(1);
}

template<typename Type>
Type Heap<Type>::top()
{
    return data[1];
}
int n, a;
double x;
int r = 0;
int tt, i;
int ma = -1;

Heap<int> que;

void solve()
{
    cin >> n;

    for (i = 0; i < (n + 2) / 2; i++)
    {
        cin>>a;
        que.push(a);
        ma = max(ma, a);
    }

    for (i = 0; i < n - (n + 2) / 2; i++)
    {
        cin>>a;
        if (a >= ma)
            r++;
        if (a > que.top() && a < ma)
        {
            que.pop();
            que.push(a);
        }
    }

    tt = que.get_size() + r - 1 - n / 2;

    if (n % 2)
    {
        for (i = 0; i < tt; i++)que.pop();
        x = que.top();
        cout<<fixed<<setprecision(1)<<x<<endl;
    }
    else
    {
        for (i = 0; i < tt; i++)que.pop();

        x = (double)que.top();
        que.pop();
        x += (double)que.top();
        x /= 2.0;
        cout<<fixed<<setprecision(1)<<x<<endl;
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

