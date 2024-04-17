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
        vector<int>a(n);
        long long XOR=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            XOR^=a[i];
        }
        long long ans=XOR;
        for(int i=0;i<n;i++)
        {
            ans=min(ans,(XOR^a[i]));
        }
        cout<<ans<<'\n';
    }
    return 0;
} 