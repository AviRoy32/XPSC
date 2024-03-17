#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sum=0,min;
    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            min=a[i];
            break;
        }
    }
    if(sum%2==0) cout<<sum;
    else
    {
        sum-=min;
        cout<<sum;
    }
     return 0;
} 