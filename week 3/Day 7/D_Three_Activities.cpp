#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<pair<ll,ll>>a(n);
        vector<pair<ll,ll>>b(n);
        vector<pair<ll,ll>>c(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i].first;
            a[i].second=i;
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i].first;
            b[i].second=i;
        }
        for(int i=0;i<n;i++)
        {
            cin>>c[i].first;
            c[i].second=i;
        }
        ll sum=0;
        sort(a.begin(),a.end(),greater<pair<ll,ll>>());
        sort(b.begin(),b.end(),greater<pair<ll,ll>>());
        sort(c.begin(),c.end(),greater<pair<ll,ll>>());
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                    if(a[i].second!=b[j].second && a[i].second!=c[k].second && b[j].second!=c[k].second)
                    {
                        sum=max(sum,a[i].first+b[j].first+c[k].first);
                    }
                }
            }
        }
        cout<<sum<<'\n';
    }
    return 0;
} 