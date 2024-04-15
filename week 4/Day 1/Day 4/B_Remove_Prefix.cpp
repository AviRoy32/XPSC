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
        vector<ll>v(n);
        set<ll>s;
        ll ans=0;
        for(int i=0;i<n;i++) cin>>v[i];
        for(int i=n-1;i>=0;i--)
        {
            s.insert(v[i]);
            ans++;
            if(ans>s.size()) break;
        }
        cout<<n-s.size()<<'\n';
    }
    return 0;
} 