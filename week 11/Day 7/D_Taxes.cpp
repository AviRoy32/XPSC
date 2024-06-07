#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool isprime(ll n)
{
    if(n==1) return false;

    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    ll n;
    cin>>n;
    if(isprime(n)) cout<<1;
    else if(n%2==0) cout<<2;
    else
    {
        if(isprime(n-2)) cout<<2;
        else cout<<3;
    }
    return 0;
} 