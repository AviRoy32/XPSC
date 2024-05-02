#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int n=a.size();
        int m=b.size();
        int lcs=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int x=i,y=j,len=0;
                while(x<a.size()&& y<b.size()&& a[x++]==b[y++]) len++;
                lcs=max(lcs,len);
            }
        }
        cout<<n+m-2*lcs<<'\n';
    }
    return 0;
} 