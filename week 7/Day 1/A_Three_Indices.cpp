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
        vector<int>a(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int x,flag=0;
        for(int i=2;i<=n-1;i++)
        {
            if(a[i]>a[i-1] && a[i]>a[i+1])
            {
                x=i-1;
                flag=1;
                break;
            }
        }
        if(!flag) cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            cout<<x<<" "<<x+1<<" "<<x+2<<'\n';
        }
    }
    return 0;
} 