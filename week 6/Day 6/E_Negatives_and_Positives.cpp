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
        ll c=0,sum=0,mn=LLONG_MAX;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0) c++;
            sum+=abs(a[i]);
            mn=min(mn,abs(a[i]));
        }
        if(c%2==1) sum-=2*mn;
        cout<<sum<<'\n';
    }
    return 0;
} 