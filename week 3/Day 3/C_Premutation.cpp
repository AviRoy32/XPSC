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
        int a[n][n-1];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                cin>>a[i][j];
            }
        }
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[a[i][n-2]]++;
        }
        int p,q;
        for(auto x:mp)
        {
            if(x.second==1) p=x.first;
            else q=x.first;
        }
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(a[i][n-2]==p)
                {
                    cout<<a[i][j]<<" ";
                }
            }
        }
        //for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
        cout<<q<<'\n';
    }
    return 0;
} 