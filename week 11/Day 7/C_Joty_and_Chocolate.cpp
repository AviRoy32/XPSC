#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a,ll b)
{
    return __gcd(a,b);
}
ll lcm(ll a,ll b)
{
    return ((a/gcd(a,b))*b);
}
int main()
{
    ll n,a,b,p,q,ans=0,overlap;
    cin>>n>>a>>b>>p>>q;
    ans+=((n/a)*p);
    ans+=((n/b)*q);
    overlap=(n/lcm(a,b));
    ans-=(overlap*(p+q));
    ans+=(overlap*max(p,q));
    cout<<ans;
    return 0;
} 