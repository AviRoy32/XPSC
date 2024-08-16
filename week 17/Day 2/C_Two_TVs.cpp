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
    ll sum=0;
    bool flag=true;
    for(auto val:mp)
    {
        sum+=val.second;
        if(sum>2) 
        {
            flag=false;
            break;
        }
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
} 