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
        vector<char>v;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='0')
            {
                int m=s[i-1]-'0';
                int p=s[i-2]-'0';
                p=p*10+m;
                char c=p+96;
                v.push_back(c);
                i-=2;
            }
            else
            {
                int x=s[i]-'0';
                char c=x+96;
                v.push_back(c);
            }
        }
        reverse(v.begin(),v.end());
        for(char c:v) cout<<c;
        cout<<'\n';
    }
    return 0;
} 