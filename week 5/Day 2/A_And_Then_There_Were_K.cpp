#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long ans=1;
        while(ans<=n) ans*=2;
        ans/=2;
        cout<<ans-1<<'\n';
    }
    return 0;
} 