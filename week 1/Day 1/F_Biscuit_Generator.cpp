#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,coin=0;
    cin>>a>>b>>c;
    while(a<=c)
    {
        coin+=b;
        c-=a;
    }
    cout<<coin;
    return 0;
} 