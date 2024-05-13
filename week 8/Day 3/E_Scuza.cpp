#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        vector<ll>a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        vector<pair<ll,ll>>v(q);
        vector<ll>ans(q);
        for(ll i=0;i<q;i++)
        {
            cin>>v[i].first;
            v[i].second=i;
        }
        ll sum=0,flag=0;
        sort(v.begin(),v.end());
        for(ll i=0;i<q;i++)
        {
            while(flag<n && a[flag]<=v[i].first)
            {
                sum+=a[flag];
                flag++;
            }
            ans[v[i].second]=sum;
        }
        for(auto x:ans) cout<<x<<" ";
        cout<<'\n';
    }
    return 0;
} 