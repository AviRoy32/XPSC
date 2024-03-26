#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        int count=0;
        for(auto it:mp)
        {
            if(it.second%2==1) count++;
        }
        if(n==1 && k==0) cout<<"YES\n";
        else if(k>=count-1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
} 