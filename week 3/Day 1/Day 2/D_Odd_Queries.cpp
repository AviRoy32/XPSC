#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        ll a[n],pre[n];
        for(ll i=1;i<=n;i++) cin>>a[i];
        memset(pre,0,sizeof(pre));
        for(int i=1;i<=n;i++) pre[i]=a[i]+pre[i-1];
        //ll sum=pre[n];
        while(q--)
        {
            ll l,r,k,sum;
            cin>>l>>r>>k;
            sum=pre[n]-pre[r]+pre[l-1];
            sum+=(r-l+1)*k;
            if(sum%2==1) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
} 