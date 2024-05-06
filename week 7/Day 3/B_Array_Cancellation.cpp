#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long>a(n);
        long long pos=0,neg=0;
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>=0) pos+=a[i];
            else
            {
                if(pos+a[i]>0) pos+=a[i];
                else
                {
                    a[i]+=pos;
                    pos=0;
                    neg+=a[i];
                } 
            }
        }
        cout<<abs(neg)<<'\n';
    }
    return 0;
} 