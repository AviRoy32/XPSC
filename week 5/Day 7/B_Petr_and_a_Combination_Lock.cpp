#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int flag=0;
    int b=(1<<n);
    for(int i=0;i<b;i++)
    {
        int sum=0;
        for(int bits=0;bits<n;bits++)
        {
            if(i&(1<<bits)) sum+=a[bits];
            else sum-=a[bits];
        }
        if(sum%360==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1) cout<<"YES";
    else cout<<"NO";
    return 0;
} 