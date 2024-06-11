#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main () 
{
    ll t;
    cin>>t;
    while(t--) 
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        ll sum = 0;
        for(ll i=0;i<n;i++) 
        {
            cin>>v[i];
            sum+=v[i];
        }
        ll temp = v.front();
        sum-=v.front();
        ll ans = __gcd(temp,sum);
        for(ll i=1;i<n;i++) 
        {
            sum-=v[i];
            temp+=v[i];
            if(sum==0) break;
            ans = max(ans,__gcd(sum,temp));
        }
        cout<<ans<<endl;
    }
    return 0;
}