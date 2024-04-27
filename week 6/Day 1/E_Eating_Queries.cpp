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
        sort(a.rbegin(),a.rend());
        vector<ll>pre(n);
        pre[0]=a[0];
        for(ll i=1;i<n;i++) pre[i]=pre[i-1]+a[i];
        while(k--)
        {
            ll val;
            cin>>val;
            if(val>pre[n-1]) cout<<-1<<'\n';
            else
            {
                ll l=0,r=n-1,idx=-1;
                while(l<=r)
                {
                    ll mid=(r+l)/2;
                    if(val<=pre[mid])
                    {
                        idx=mid;
                        r=mid-1;
                    }
                    else l=mid+1;
                }
                cout<<idx+1<<'\n';
            }
        }
    }
    return 0;
} 