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
        if(n==2)
        {
            cout<<0<<" "<<1<<'\n';
            continue;
        }
        int curr=n-1;
        while(curr>1)
        {
            cout<<curr<<" ";
            if(__lg(curr-1)!=__lg(curr)) break;
            curr--;
        }
        for(int i=0;i<curr;i++) cout<<i<<" ";
        cout<<'\n';
    }
    return 0;
} 