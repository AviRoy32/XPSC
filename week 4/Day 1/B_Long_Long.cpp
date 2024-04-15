#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,sum=0;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=abs(a[i]);
        }
        ll count=0,r=0;
        // for(ll i=0;i<n;i++)
        // {
        //     if(a[i]<=0) continue;
        // }
        while(r<n)
        {
            if(a[r]<0)
            {
                while(a[r]<=0 && r<n)
                {
                    r++;
                }
                count++;
            }
            r++;
        }
        cout<<sum<<" "<<count<<'\n';
    }
    return 0;
} 