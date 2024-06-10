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
        map<int,int>mp;
        for(int i=0;i<n;i++) 
        {
            cin>>a[i];
            mp[a[i]]=i+1;
        }
        int ans=-1;
        for(int i=1;i<=1000;i++)
        {
            if(mp[i]>0)
            {
                for(int j=1;j<=1000;j++)
                {
                    if(mp[j]>0)
                    {
                        if(__gcd(i,j)==1) ans=max(ans,mp[i]+mp[j]);
                    }
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
} 