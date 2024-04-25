#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll cnt=0;
        ll sum=0;
        ll sum_s;
        while(n)
        {
           if((n&1)==0)
           {
                cnt++;
                sum++;
           }
           else if((n&1)==1)
           {
                sum_s=sum;
                sum=0;
           }
            n>>=1;
        }
        ll res=pow(2,cnt-sum_s);
        cout<<res<<endl;
    }
}