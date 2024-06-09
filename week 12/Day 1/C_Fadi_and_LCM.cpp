#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll lcm(ll a,ll b)
{
    return ((a/__gcd(a,b))*b);
}
int main()
{
    ll n,ans;
    cin>>n;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0 && lcm(i,n/i)==n)
        {
            ans=i;
        }
    }
    cout<<ans<<" "<<n/ans;
    return 0;
} 