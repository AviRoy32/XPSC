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
        int one=0,zero=0;
        for(char c:s)
        {
            if(c=='1') one++;
            else zero++;
        }
        for(char c:s)
        {
            if(c=='1') 
            {
                if(zero>0) zero--;
                else break;
            }
            else
            {
                if(one>0) one--;
                else break;
            }
        }
        cout<<one+zero<<'\n';
    }
    return 0;
} 