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
        int b=0,gp=0;
        string ans="";
        for(int i=0,j=n-1;i<j;i++,j--)
        {
            if(s[i]!=s[j]) b++;
            else gp+=2;
        }
        for(int i=0;i<=n;i++)
        {
           int total=i;
           total-=b;
           if(total<0)
           {
            ans.push_back('0');
            continue;
           }
           total=max((total%2),total-gp);
           total=max(0,total-(n%2));

           if(total==0) ans.push_back('1');
           else ans.push_back('0');
        }
        cout<<ans<<'\n';
    }
    return 0;
} 