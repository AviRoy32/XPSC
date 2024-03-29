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
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]+=32;
            }
        }
        string demo="meow";
        string s2="";
        for(int i=0;i<n;i++)
        {
            if(s2.empty()||s2[s2.size()-1]!=s[i])
            {
                s2.push_back(s[i]);
            }
        }
        if(s2==demo) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
} 