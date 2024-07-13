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
        for(ll i=0;i<n;i++) cin>>v[i];
        bool flag = false;
        ll id;
        for(ll i=0;i<n-1;i++) 
        {
            if(abs(v[i]-v[i+1])>1) 
            {
                flag = true;
                id = i+1;
                break;
            }
        }
        if(!flag) cout<<"NO"<<endl;
        else 
        {
            cout<<"YES"<<endl;
            cout<<id<<" "<<id+1<<endl;
        }
    }
    return 0;
}