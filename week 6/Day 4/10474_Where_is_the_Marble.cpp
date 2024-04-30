#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(long long i=0; ;i++)
    {
        long long n,q;
        cin>>n>>q;
        if(n==0 && q==0) break;
        vector<long long>a(n);
        for(long long i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        cout<<"CASE#"<<" "<<i+1<<":"<<'\n';
        while(q--)
        {
            long long m;
            cin>>m;
            long long l=0,r=n-1,mid,idx=-1;
            while(l<=r)
            {
                mid=(l+r)/2;
                if(m<=a[mid])
                {
                    idx=mid;
                    r=mid-1;
                }
                //else if(m<a[mid]) r=mid-1;
                else l=mid+1;
            }
            int flag=0;
            for(int i=0;i<n;i++)
            {
                if(a[i]==m) 
                {
                    flag=1;
                    break;
                }
            }
            
            if(idx==-1 || flag==0) cout<<m<<" "<<"not found"<<'\n';
            else cout<<m<<" "<<"found at"<<" "<<idx+1<<'\n';
        }
    }

    return 0;
} 