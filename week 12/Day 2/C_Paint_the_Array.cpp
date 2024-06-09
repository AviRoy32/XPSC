#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        ll gcd1=0,gcd2=0;
        for(ll i=0;i<n;i++)
        {
            if((i+1)%2==0) gcd1=__gcd(gcd1,a[i]);
            else gcd2=__gcd(gcd2,a[i]);
        }
        bool flag1=true,flag2=true;
        for(ll i=0;i<n;i+=2)
        {
            if(a[i]%gcd1==0)
            {
                flag1=false;
                break;
            }
        }
        for(ll i=1;i<n;i+=2)
        {
            if(a[i]%gcd2==0)
            {
                flag2=false;
                break;
            }
        }
        if(!flag1 && !flag2) cout<<0<<'\n';
        else if(flag1) cout<<gcd1<<'\n';
        else cout<<gcd2<<'\n';
    }
    return 0;
} 