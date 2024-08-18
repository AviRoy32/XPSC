#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    map<ll,ll>mp;
    while(n--)
    {
        ll l,r;
        cin>>l>>r;
        mp[l]++;
        mp[r+1]--;
    }
    ll mx=LLONG_MIN;
    ll sum=0;
    for(auto val:mp)
    {
        sum+=val.second;
        mx=max(mx,sum);
    }
    cout<<mx;
    return 0;
} 