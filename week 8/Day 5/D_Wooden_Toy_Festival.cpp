#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=-0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        auto ok=[&](long long mid)
        {
            int l=0,cnt=1;
            for(int r=0;r<n;r++)
            {
                if((a[r]-a[l])>2*mid)
                {
                    cnt++;
                    l=r;
                }
            }
            return cnt<=3;
        };
        long long l=0,r=1e9,ans,mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(ok(mid))
            {
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        cout<<ans<<'\n';
    }
    return 0;
} 