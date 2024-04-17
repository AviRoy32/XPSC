#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<long long>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int l=0,r=0;
        long long odd=0,ans=0;
        while(r<n)
        {
            if(a[r]%2==1) odd++;
            if(r-l+1==k)
            {
                if(odd>=1) ans++;
                if(a[l]%2==1) odd--;
                l++;
                r++;
            }
            else r++;
        }
        cout<<ans<<'\n';
    }
    return 0;
} 