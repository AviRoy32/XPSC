#include <bits/stdc++.h>
#define ll long long
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<pair<ll,ll>>a(n);
        for(ll i=0;i<n;i++) cin>>a[i].first>>a[i].second;
        pbds<ll>pb;
        ll ans=0;
        sort(a.begin(),a.end());
        for(ll i=n-1;i>=0;i--)
        {
            ans+=pb.order_of_key(a[i].second);
            pb.insert(a[i].second);
        }
        cout<<ans<<'\n';
    }
}