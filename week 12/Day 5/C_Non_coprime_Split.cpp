#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main () 
{
    ll t;
    cin>>t;
    while(t--) 
    {
        ll a,b;
        cin>>a>>b;
        if(a==b && a%2==1) 
        {
            vector<ll> div;
            for(ll i=2;i<=sqrt(a);i++) 
            {
                if(a%i==0) 
                {
                    div.push_back(i);
                    if(a/i!=i) div.push_back(a/i);
                }
            }
            bool flag = false;
            for(ll i:div) 
            {
                ll x=i,y=a-x;
                if(__gcd(x,y)!=1) 
                {
                    flag = true;
                    cout<<x<<" "<<y<<endl;
                    break;
                }
            }
            if(!flag) cout<<-1<<endl;
        }
        else 
        {
            if (b%2==0 && b!=2) cout<< b/2<<" "<<b/2<<endl;
            else if((b-1)%2==0 && (b-1)!=2) cout<<(b-1)/2<<" "<<(b-1)/2<<endl;
            else cout<<-1<<endl;
        }
    }
    return 0;
}