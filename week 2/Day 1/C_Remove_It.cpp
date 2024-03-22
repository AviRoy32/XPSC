#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,s;
    cin>>n>>s;
    vector<long long>a(n);
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
        if(a[i]==s) cout<<"";
        else cout<<a[i]<<" ";
    }
    return 0;
} 