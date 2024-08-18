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
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        int mx=INT_MIN;
        for(int s=1;s<=100;s++)
        {
            int c=0;
            for(int i=0,j=n-1;i<j;)
            {
                if(a[i]+a[j]>s) j--;
                else if(a[i]+a[j]<s) i++;
                else
                {
                    i++,j--;
                    c++;
                }
            }
            mx=max(c,mx);
        }
        cout<<mx<<'\n';
    }
    return 0;
} 