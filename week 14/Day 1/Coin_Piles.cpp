#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a<b) swap(a,b);
        if(a>2*b) cout<<"NO\n";
        else if((a+b)%3==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
} 