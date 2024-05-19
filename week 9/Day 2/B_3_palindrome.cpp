#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=n%2;
    for(int i=1;i<=n/2;i++)
    {
        if(i%2==1)
        {
            cout<<"aa";

        }
        else cout<<"bb";
    }
    if(m==1) 
    {
        int p=n/2;
        if(p%2==1) cout<<"b";
        else cout<<"a";
    }
    return 0;
} 