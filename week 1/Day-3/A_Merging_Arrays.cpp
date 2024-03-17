#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    vector<long long>a(n),b(m),c;
    for(long long i=0;i<n;i++) cin>>a[i];
    for(long long i=0;i<m;i++) cin>>b[i];
    long long l=0,r=0;
    while(l<n || r<m)
    {
        if(l>=n)
        {
            c.push_back(b[r]);
            r++;
        }
        else if(r>=m)
        {
            c.push_back(a[l]);
            l++;
        }
        else if(a[l]<b[r])
        {
            c.push_back(a[l]);
            l++;
        }
        else
        {
            c.push_back(b[r]);
            r++;
        }
    }
    for(long long val:c)
    {
        cout<<val<<" ";
    }
    return 0;
} 
