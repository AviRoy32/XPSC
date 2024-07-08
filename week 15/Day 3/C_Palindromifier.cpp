#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() 
{
    string s;
    cin>>s;
    string temp = s;
    reverse(temp.begin(),temp.end());
    if(temp==s) cout<<0<<'\n';
    else 
    {
        cout<<3<<'\n';
        cout<<"L "<<2<<'\n';
        ll n = s.size()+1;
        cout<<"R "<<2<<'\n';
        n = n+n-3;
        cout<<"R "<<n<<'\n';
    }
    return 0;
}
