#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        if(a+b==c) cout<<'+'<<'\n';
        else cout<<'-'<<'\n';
    }
    return 0;
} 