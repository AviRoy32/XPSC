#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        if(n>m)
        {
            cout<<"No\n";
            continue;
        }
        vector<ll>a(n);
        ll sum=0;
        if(n%2==0 && m%2==0)
        {
            cout<<"Yes\n";
            for(ll i=0;i<n-2;i++)
            {
                a[i]=1;
                sum++;
            }
            ll ans=(m-sum)/2;
            a[n-2]=ans;
            a[n-1]=ans;
        }
        else if(n%2==1 && m%2==1 || n%2==1 && m%2==0)
        {
            cout<<"YES\n";
            for(ll i=0;i<n-1;i++)
            {
                a[i]=1;
                sum++;
            }
            a[n-1]=m-sum;
        }
        else if(n%2==0 && m%2==1)
        {
            cout<<"No\n";
            continue;
        }
       for(ll i=0;i<n;i++) cout<<a[i]<<" ";
       cout<<'\n';
    }
    return 0;
} 