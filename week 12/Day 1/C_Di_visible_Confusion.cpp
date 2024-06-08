#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long>a(n);
        for(long long i=0;i<n;i++) cin>>a[i];
        bool flag=false;
        for(long long i=0;i<n;i++)
        {
            bool check=false;
            for(long long j=2;j<=i+2;j++)
            {
                if(a[i]%j!=0)
                {
                    check=true;
                    break;
                }
            }
            if(!check)
            {
                flag=true;
                break;
            }
        }
        if(flag) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
} 