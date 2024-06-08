#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<int,int>cnt;
    for(int i=0;i<n;i++)
    {
        for(int j=2;j*j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                cnt[j]++;
            } 
            while(a[i]%j==0)
            {
                a[i]/=j;
            }
        }
        if(a[i]>1) cnt[a[i]]++;
    }
    int mx=1;
    for(auto[x,y]:cnt)
    {
        mx=max(mx,y);
    }
    cout<<mx;
    return 0;
} 