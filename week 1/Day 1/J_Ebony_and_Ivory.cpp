#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,flag=0;
    cin>>a>>b>>c;
    for(int i=0;i<=10000;i++)
    {
        for(int j=0;j<=10000;j++)
        {
            if(a*i + b*j==c) flag=1;
        }
    }
    if(flag==1) cout<<"Yes";
    else cout<<"No";
    return 0;
} 