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
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        ll r=0,sum=0;
        while(r<n) 
        {
            if(v[r]>0) 
            {
                ll mx = LLONG_MIN;
                while(r<n && v[r]>0) 
                {
                    mx = max(mx,v[r]);
                    r++;
                }
                sum+=mx;
            }
            else 
            {
                ll mx = LLONG_MIN;
                while(r<n && v[r]<0) 
                {
                    mx = max(mx,v[r]);
                    r++;
                }
                sum += mx;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}