#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=1;i<1000;i++)
    {
        c*=i;
        if(c>=a && c<=b)
        {
            cout<<c;
            return 0;
        } 
    }
    cout<<-1;
    return 0;
} 