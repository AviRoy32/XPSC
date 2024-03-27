#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,s;
    cin>>n>>s;
    vector<long long>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    long long l=0,r=0,ans=0,sum=0;;
    while(r<n)
    {
        sum+=a[r];
        if(sum<=s)
        {
            ans=max(ans,r-l+1);
        }
        else
        {
            sum-=a[l];
            l++;
        }
        r++;
    }
    cout<<ans;
    return 0;
} 