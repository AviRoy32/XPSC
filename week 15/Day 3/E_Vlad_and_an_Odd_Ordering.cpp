#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll i=1;
        while(true)
        {
            ll x=((n/i)+1)/2;
            if(k<=x)
            {
                ll y=(2*k-1)*i;
                cout<<y<<'\n';
                break;
            }
            else k-=x;
            i*=2;
        } 
    }
    return 0;
} 