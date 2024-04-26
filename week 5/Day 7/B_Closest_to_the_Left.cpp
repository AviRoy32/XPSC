#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    while(k--)
    {
        int key;
        cin>>key;
        int l=0,r=n-1,mid,ans=-1;
        auto it=upper_bound(a.begin(),a.end(),key);
        cout<<it-a.begin()<<'\n';
    }
    return 0;
} 