#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    auto ok=[&](long long m)
    {
        long long cnt=0;
        for(int i=n/2;i<n;i++)
           cnt+=(a[i]<m?(m-a[i]):0);
        if(cnt<=k) return true;
        return false;
    };
    long long l=1,r=2e9,ans=0,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
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