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
        long long OR=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            OR|=a[i];
        }
        cout<<OR<<'\n';
    }
    return 0;
} 