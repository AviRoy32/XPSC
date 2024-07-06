#include <bits/stdc++.h>
#define ll long long
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--) 
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) 
        {
            cin>>v[i];
        }
        pbds<ll>pb;
        ll ans= 0;
        for(ll i=n-1;i>=0;i--) 
        {
            ans+=pb.order_of_key(v[i]+1);
            pb.insert(v[i]);
        }
        cout<<ans<<'\n';
    }
    return 0;
}