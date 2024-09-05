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
        vector<ll>v(n);
        for(ll i=0;i<n;i++) cin>>v[i];   
        sort(v.begin(),v.end());
        ll mn = v[0];
        for(ll i=0;i<n-1;i++) 
        {
            mn = min(mn,(v[i+1]-v[i]));
        }
        if(k==1) cout<<mn<<endl;
        else if(k>2) cout<<0<<endl;
        else 
        {
            for(ll i=0;i<n;i++) 
            {
                for(ll j=i+1;j<n;j++) 
                {
                    ll dif = v[j]-v[i];
                    ll ind = lower_bound(v.begin(),v.end(),dif) - v.begin();
                    mn = min(mn,v[ind]-dif);
                    if(ind>0) mn = min(mn,dif-v[ind-1]);
                }
            }
            cout<<mn<<endl;
        }
    }
    return 0;
}