#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,h;
        cin>>n>>m>>h;
        vector<ll>a(n),v(m);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            v.push_back(x*h);
        }
        sort(a.rbegin(),a.rend());
        sort(v.rbegin(),v.rend());
        ll ans=0;
        for(int i=0;i<min(n,m);i++)
        {
            if(a[i]>=v[i]) ans+=v[i];
            else ans+=a[i];
        }
        cout<<ans<<'\n';
    }
    return 0;
} 