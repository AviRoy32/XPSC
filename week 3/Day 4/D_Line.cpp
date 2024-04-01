#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin.ignore();
        cin>>s;
        ll sum=0,c=0;
        vector<ll>v;
        vector<ll>ans(n+1);
        for(int i=0;i<n;i++)
        {
            int L=i;
            int R=n-1-i;
            if(s[i]=='R')
            {
                if(L>R)
                {
                    sum+=L;
                    c++;
                    v.push_back(L-R);
                }
                else sum+=R;
            }
            else if(s[i]=='L')
            {
                if(R>L)
                {
                    sum+=R;
                    c++;
                    v.push_back(R-L);
                }
                else sum+=L;
            }
        }
        for(int i=c;i<=n;i++)
        {
            ans[i]=sum;
        }
        sort(v.begin(),v.end(),greater<ll>());
        for(int i=c-1;i>=1;i--)
        {
            sum-=v.back();
            v.pop_back();
            ans[i]=sum;
        }
        for(int i=1;i<=n;i++) cout<<ans[i]<<" "; 
        cout<<'\n';
    }
    return 0;
} 