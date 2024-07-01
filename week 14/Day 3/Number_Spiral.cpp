#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        if(x<y)
        {
            if(y%2) cout<<(y*y)-x+1<<'\n';
            else cout<<(y-1)*(y-1)+x<<'\n';
        }
        else
        {
            if(x%2==0) cout<<(x*x)-y+1<<'\n';
            else cout<<(x-1)*(x-1)+y<<'\n';
        }
    }
    return 0;
} 