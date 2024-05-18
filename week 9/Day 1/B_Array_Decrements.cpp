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
        vector<ll>a(n),b(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++) cin>>b[i];
        ll mx=0;
        for(ll i=0;i<n;i++) mx=max(mx,abs(a[i]-b[i]));
        bool flag=false;
        for(ll i=0;i<n;i++)
        {
            if(a[i]-mx==b[i]) flag=true;
            else if(a[i]-mx<0 && b[i]==0) flag=true;
            else
            {
                flag=false;
                break;
            }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
} 