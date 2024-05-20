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
        int ans=n;
        for(char c='a';c<='z';c++)
        {
            int l=0,r=n-1,count=0;
            while(l<=r)
            {
                if(s[l]==s[r])
                {
                    l++;
                    r--;
                }
                else if(s[l]==c)
                {
                    count++;
                    l++;
                }
                else if(s[r]==c)
                {
                    count++;
                    r--;
                }
                // else
                // {
                //     count=n;
                //     break;
                // }
            }
             ans=min(ans,count);
        }
        if(ans==n) cout<<-1<<'\n';
        else cout<<ans<<'\n';
    }
    return 0;
} 