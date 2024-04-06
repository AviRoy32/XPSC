#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,sum=0;
        cin>>n;
        while(n>0)
        {
            sum+=n;
            n/=2;
        }
        cout<<sum<<'\n';
    }
    return 0;
} 