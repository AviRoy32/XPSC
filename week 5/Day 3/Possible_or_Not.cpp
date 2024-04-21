#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,b;
        cin>>n>>b;
        vector<ll>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            if((a[i]&b)==b)
            {
                ans&=a[i];
            }
        }
        if(ans==b) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
} 