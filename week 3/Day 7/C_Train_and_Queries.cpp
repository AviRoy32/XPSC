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
        vector<int>v(n);
        map<int,vector<int>>mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]].push_back(i);
        }
        while(q--)
        {
            ll l,r;
            cin>>l>>r;
            if(mp[l].empty() || mp[r].empty()) cout<<"NO\n";
            else if(mp[l].front()<=mp[r].back()) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
} 