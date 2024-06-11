#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main () 
{
    vector<ll> first_11_prime ={2,3,5,7,11,13,17,19,23,29,31};
    ll t;
    cin>>t;
    while(t--) 
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        vector<ll> ans(n);
        for(ll i=0;i<n;i++)  cin>>v[i];
           
        for(ll i=0;i<n;i++) 
        {
            for(ll j=0;j<11;j++) 
            {
                if(v[i]%first_11_prime[j]==0) 
                {
                    ans[i]=j+1;
                }
            }
        }
        map<ll,ll> mp;
        for(ll i=0;i<n;i++)  mp[ans[i]]++;
        for(ll i=11;i>=1;i--) 
        {
            if(mp[i]==0) 
            {
                for(ll j=0;j<n;j++) 
                {
                    if(ans[j]>i)  ans[j]--;
                }
            }
        }
        ll cnt = 0;
        for(ll i=1;i<=11;i++) {
            if(mp[i]>0) cnt++;
        }
        cout<<cnt<<endl;
        for(ll i:ans) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}