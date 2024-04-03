#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,q;
        cin>>n>>k>>q;
        vector<ll>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        ll l=0,r=0,maxval=INT_MIN,count=0,ans=0;
            while(r<n)
            {
                maxval=max(maxval,a[r]);
                count++;
                if(count>=k && maxval<=q)
                {
                    if(count==k) ans++;
                    else if(count>k) ans+=(count-k)+1;
                }
                else if(maxval>q)
                {
                    l=r+1;
                    count=0;
                    maxval=INT_MIN;
                }
                r++;
            }
            cout<<ans<<'\n';
    }
    return 0;
} 