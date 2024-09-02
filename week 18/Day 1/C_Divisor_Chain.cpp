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
        ll temp=n;
        vector<ll>bits;
        while(temp!=0)
        { 
            bits.push_back(temp%2);
            temp/=2;
        }
        ll cnt=bits.size();
        vector<ll>ans;
        ll val=1;
        ans.push_back(n);

        for(ll i=0;i<cnt-1;i++)
        {
            if(bits[i]==1)
            {
                ans.push_back(n-val);
                n-=val;
            }
            val*=2;
        }
        while(n!=1)
        {
            ans.push_back(n/2);
            n/=2;
        }
        cout<<ans.size()<<'\n';
        for(auto i:ans)
        {
            cout<<i<<" ";
        }
        cout<<'\n';
    }
    return 0;
} 