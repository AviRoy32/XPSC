#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        int flag=0;
        if(n%2==0 && n>2)
        {
            for(int i=1;i<n/2;i++)
            {
                if(s[i]!=s[i-1])
                {
                    flag=1;break;
                }
            }
        }
        else if(n%2==1 && n>3)
        {
            for(int i=1;i<n/2;i++)
            {
                if(s[i]!=s[i-1])
                {
                    flag=1;break;
                }
            }
        }
        if(flag==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
} 