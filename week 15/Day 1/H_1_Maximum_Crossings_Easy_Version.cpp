#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main() 
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        pbds<int>pb;
        int ans= 0;
        for(int i=n-1;i>=0;i--) {
            ans+=pb.order_of_key(v[i]+1);
            pb.insert(v[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}