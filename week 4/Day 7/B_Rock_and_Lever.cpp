#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        map<long long,long long>mp;
        for(long long i=0;i<n;i++)
        {
            long long x;
            cin>>x;
            mp[__lg(x)]++;
        }
        long long ans=0;
        for(auto p: mp)
        {
            ans+=(p.second*(p.second-1))/2;
        }
        cout<<ans<<'\n';
    }
    return 0;
} 