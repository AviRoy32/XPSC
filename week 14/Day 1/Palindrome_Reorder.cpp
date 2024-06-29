#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char,int>mp;
    for(char c:s) mp[c]++;
    int count=0;
    for(auto it:mp)
    {
        if(it.second%2!=0) count++;
    }
    if(count>1) 
    {
        cout<<"NO SOLUTION";
        return 0;
    }
    string ans="";
    string m="";
    for(auto it:mp)
    {
        for(int i=0;i<it.second/2;i++) ans.push_back(it.first);
        if(it.second%2==1) m=it.first;
    }
    string result=ans;
    result+=m;
    reverse(ans.begin(),ans.end());
    result+=ans;
    cout<<result;
    return 0;
} 