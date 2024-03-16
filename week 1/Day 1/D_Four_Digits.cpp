#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    int temp=n;
    if(n==0)
    {
        cout<<"0000";
        return 0;
    }
    while(temp>0)
    {
        c++;
        temp/=10;
    }
    if(c==4) cout<<n;
    else
    {
        for(int i=0;i<(4-c);i++)
        {
            cout<<0;
        }
        cout<<n;
    }
    return 0;
} 