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
        sort(a.begin(),a.end());
        for(ll i=n-1;i>=0;i--) cout<<a[i]<<" ";
        cout<<'\n';
    }
    return 0;
} 