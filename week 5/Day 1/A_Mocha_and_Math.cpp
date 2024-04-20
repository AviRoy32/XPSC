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
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int x=a[0];
        for(int i=1;i<n;i++) x=(x&a[i]);
        cout<<x<<'\n';
    }
    return 0;
} 