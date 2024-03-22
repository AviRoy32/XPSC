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
        cin.ignore();
        string s;
        cin>>s;
        int t=0,a=0,m=0,u=0,r=0,o=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='T') t++;
            else if(s[i]=='i') a++;
            else if(s[i]=='m') m++;
            else if(s[i]=='u') u++;
            else if(s[i]=='r') r++;
            else o++;
        }
        if(t==1 && a==1 && m==1 && u==1 && r==1 && o==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
} 