#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int n=a.size();
    int m=b.size();
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    auto ok=[&](int mid)
    {
        vector<bool>ch(n+1);
        for(int i=0;i<mid;i++)
        {
            ch[v[i]]=true;
        }
        bool found=false;
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[j] && !ch[i+1]) j++;
            if(j==m)
            {
                found=true;
                break;
            }
        }
        return found;
    };
    int l=0,r=n,mid,ans;
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