#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,x;
    cin>>n>>x;
    vector<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    map<ll,ll>mp;
    ll sum=0,c=0;
    mp[0]++;
    for(ll i=0;i<n;i++)
    {
        sum+=a[i];
        c+=mp[sum-x];
        mp[sum]++;
    }
    cout<<c;
    return 0;
} 