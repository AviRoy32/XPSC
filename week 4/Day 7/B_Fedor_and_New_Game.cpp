#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(m+1);
    for(int i=0;i<=m;i++) cin>>a[i];
    vector<vector<int>>all_mask;
    for(int i=0;i<=m;i++)
    {
        vector<int>v;
        for(int k=0;k<n;k++)
        {
            if((a[i]>>k)&1) v.push_back(1);
            else v.push_back(0);
        }
        all_mask.push_back(v);
    }
    int ans=0;
    vector<int>foden_mask=all_mask[m];
    for(int i=0;i<all_mask.size()-1;i++)
    {
        vector<int>v=all_mask[i];
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(foden_mask[j]!=v[j]) count++;
        }
        if(count<=k) ans++;
    }
    cout<<ans<<'\n';
    return 0;
} 