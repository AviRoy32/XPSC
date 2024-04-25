#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define pb push_back
#define f(i, x, n) for (int i = x; i < n; i++)
#define all(s) sort(s.begin(), s.end())

void solve()
{
    int n; cin>>n;

    vi a(n), p;
    f(i,0,n) cin>>a[i];

    all(a);

    priority_queue<int> pq;
    pq.push(a[n-1]); 
    for(int i=n-2;i>=0;i--){
        if(pq.top() >= a[i]){
            int x = pq.top() ^ a[i];  
            pq.pop();
            pq.push(x);
        }
        else pq.push(a[i]);
    }
    cout<<pq.size()<<endl;
}

int32_t main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}