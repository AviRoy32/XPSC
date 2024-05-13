#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        auto ok=[&](ll mid)
        {
            ll total=0;
            for(ll i=0;i<n;i++)
            {
                if(mid>a[i]) total+=mid-a[i];
            }
            if(total<=k) return true;
            else return false;
        };
        ll l=0,r=a[n-1]+k,ans,mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(ok(mid))
            {
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        cout<<ans<<'\n';
    }
    return 0;
} 

