#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,cnt=0;
    cin>>x>>y;
    while(x<=y)
    {
        cnt++;
        x=x*2;
    }
    cout<<cnt;
    return 0;
} 