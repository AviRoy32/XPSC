#include<bits/stdc++.h>
using namespace std;
const int maxN=1e4;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long long>pwr;
    for(long long i=1;i<=maxN;i++)
    {
        pwr.push_back(pow(i,3));
    }
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        bool found=false;
        for(int i=0;i<maxN;i++)
        {
            if(pwr[i]>=n) break;
            int l=0,r=maxN-1,mid;
            long long need=n-pwr[i];
            bool ok=false;
            while(l<=r)
            {
                mid=(l+r)/2;
                if(pwr[mid]==need)
                {
                    ok=true;
                    break;
                }
                else if(pwr[mid]>need) r=mid-1;
                else l=mid+1;
            }
            if(ok)
            {
                found=true;
                break;
            }
        }
        if(found) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
} 