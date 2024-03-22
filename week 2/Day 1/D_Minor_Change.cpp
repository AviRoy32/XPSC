#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    long long c=0;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]!=s2[i]) c++;
    }
    cout<<c;
    return 0;
} 