#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
    cin>>n;
    map<int,int> m;
    vector <int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    vector <int> v(n+2,0);
    for(auto x:m)
    {
        for(int j=1;j<=n;j++)
        {
            if(j*x.first>n)
            {
                break;
            }
            v[j*x.first]+=x.second;
        }
    }
    int ans=0;
    for(auto i:v)
    {
        ans=max(ans,i);
    }
    cout<<ans<<endl;
    } 
    return 0;
}