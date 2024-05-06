#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,c;
        cin>>n>>c;
        vector<ll>a(n+1);
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
            a[i]+=i;
        }
        sort(a.begin(),a.end());
        ll sum=0,count=0;
        for(ll i=1;i<=n;i++)
        {
            if(sum+a[i]>c) break;
            sum+=a[i];
            count++;
        }
        cout<<count<<'\n';
    }
    return 0;
} 