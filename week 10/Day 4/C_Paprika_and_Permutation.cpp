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
        map<int,int>mp,bp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        vector<int>v;
        for(auto it:mp)
        {
            int x=it.first;
            int y=it.second;
            if(x<=n)
            {
                for(int i=1;i<y;i++) v.push_back(x);
                bp[x]=1;
            }
            else 
            {
                for(int i=1;i<=y;i++) v.push_back(x);
            }
        }
        int count=1,ans=0;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            for(int j=count;j<=n;j++)
            {
                if(bp[j]==1) count++;
                else break;
            }
            int m=(v[i]-1)/2;
            if(count<=m)
            {
                count++;
                ans++;
            }
            else
            {
                ans=-1;
                break;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
} 