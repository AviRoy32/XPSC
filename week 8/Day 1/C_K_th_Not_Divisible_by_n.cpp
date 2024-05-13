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
        ll l=1,r=1e18,ans,mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            ll x=mid-mid/n;
            if(x>=k)
            {
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        cout<<ans<<'\n';
    }
    return 0;
} 