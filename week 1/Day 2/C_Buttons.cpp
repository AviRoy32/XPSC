#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==b) cout<<a+b;
    else
    {
        int r=max(a,b);
        cout<<2*r-1;
    }
    return 0;
} 