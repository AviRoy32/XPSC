#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    ll q;
    cin>>q;
    while(q--)
    {
        ll m;
        cin>>m; 
        ll l=0,r=n-1,mid,idx=-1;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(m>=a[mid])
            {
                idx=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        //if(idx==-1) cout<<0<<'\n';
         cout<<idx+1<<'\n';
    }
    return 0;
} 