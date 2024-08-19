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
        vector<ll>a(n),b(n),c;
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++) cin>>b[i];
        for(ll i=0;i<n;i++) c.push_back(b[i]-a[i]);
        sort(c.begin(),c.end(),greater<ll>());
        ll s=0;
        ll l=0,r=c.size()-1;
        while(l<r)
        {
            if(c[l]+c[r]>=0)
            {
                s++;
                l++;
            }
           r--;
        }
        cout<<s<<'\n';
    }
    return 0;
} 