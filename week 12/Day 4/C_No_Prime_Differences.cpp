#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main () 
{
    ll t;
    cin>>t;
    while(t--) 
    {
        ll n,m;
        cin>>n>>m;
        ll k = n/2;
        ll l = m+1;
        for(ll i=1;i<=k;i++) 
        {
            ll cnt = 0;
            for(ll j=l;cnt<m;j++) 
            {
                cout<<j<<" ";
                cnt++;
            }
            l+=m+m;
            cout<<endl;
        }
        l=1;
        for(ll i=1;i<=n-k;i++) 
        {
            ll cnt = 0;
            for(ll j=l;cnt<m;j++) 
            {
                cout<<j<<" ";
                cnt++;
            }
            l+=m+m;
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}