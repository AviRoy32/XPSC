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
        vector<long long>v(n);
        map<long long,long long>mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        int count=0;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            while(mp[v[i]]>0) 
            {
                count++;
                mp[v[i]]--;
                int m=v[i];
                while(mp[++m]>0)
                {
                    mp[m]--;
                }
            }
        }
        cout<<count<<'\n';
    }
    return 0;
} 