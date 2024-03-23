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
        int m=n;
        set<int>s;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        int p=m-s.size();
        if(p%2==1) cout<<s.size()-1<<'\n';
        else cout<<s.size()<<'\n';
    }
    return 0;
} 