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
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int k=0;
        for(int i=0;i<n;i++)
        {
            int m;
            cin>>m;
            cin.ignore();
            string s;
            cin>>s;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='D')
                {
                    if(a[k]==9) a[k]=0;
                    else a[k]=a[k]+1;
                }
                else
                {
                    if(a[k]==0) a[k]=9;
                    else a[k]=a[k]-1;
                }
            }
            cout<<a[k]<<" ";
            k++;
        }
        cout<<'\n';
    }
    return 0;
} 