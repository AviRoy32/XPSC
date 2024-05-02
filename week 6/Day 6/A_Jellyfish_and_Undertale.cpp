#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)  cin>>v[i];
        ll ans=b-1;
        for(ll i=0;i<n;i++)
        {
            if(v[i]+1<=a) ans+=v[i];
            else ans+=a-1;
        }
        cout<<ans+1<<'\n';
    }
    return 0;
} 