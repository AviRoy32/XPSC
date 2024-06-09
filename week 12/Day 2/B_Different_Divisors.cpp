#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<bool>prime(30000,true);
    for(int i=2;i*i<=30000;i++)
    {
        if(prime[i])
        {
            for(int j=i+i;j<=30000;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    while(t--)
    {
        int d,a,b;
        cin>>d;
        b=1+d;
        while(!prime[b]) b++;
        int c=b+d;
        while(!prime[c]) c++;
        cout<<b*c<<'\n';
    }
    return 0;
} 