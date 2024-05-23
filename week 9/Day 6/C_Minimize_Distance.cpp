#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
       cin>>n>>k;
       vector <ll> pos,neg;
        for(int i=0;i<n;i++)
       {
          ll x;
          cin>>x;
          if(x<0) neg.push_back(abs(x));
          else pos.push_back(x);
       }
        sort(pos.rbegin(),pos.rend());
        sort(neg.rbegin(),neg.rend());
        ll ans=0;
        for(int i=0;i<pos.size();i=i+k) ans+=pos[i]*2;
        for(int i=0;i<neg.size();i=i+k) ans+=neg[i]*2;
        if(!pos.empty() && !neg.empty()) cout<<ans-max(pos[0],neg[0])<<endl;
        else if(pos.empty() && !neg.empty()) cout<<ans-neg[0]<<endl;
        else if(!pos.empty() && neg.empty()) cout<<ans-pos[0]<<endl;
        else cout<<ans<<endl;
    } 
    return 0;
}