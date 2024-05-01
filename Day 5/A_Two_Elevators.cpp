#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll x=a-1;
        ll y=abs(c-b)+(c-1);
        if(x<y) cout<<1<<'\n';
        else if(x>y) cout<<2<<'\n';
        else cout<<3<<'\n';
    }
    return 0;
} 