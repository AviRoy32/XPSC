#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    vector<ll>pre(n);
    pre[0]=a[0];
    for(ll i=1;i<n;i++) pre[i]=a[i]+pre[i-1];
    ll q;
    cin>>q;
    for(ll i=0;i<q;i++)
    {
        ll m;
        cin>>m;
        ll l=0,r=n-1,mid,idx=-1;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(m<=pre[mid])
            {
                idx=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        cout<<idx+1<<'\n';
    }
    return 0;
} 