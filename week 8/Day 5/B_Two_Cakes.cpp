#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    auto ok=[&](int mid)
    {
        int c=0;
        c+=a/mid;
        c+=b/mid;
        return c>=n;
    };
    int l=1,r=min(a,b),ans,mid;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(ok(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans;
    return 0;
} 