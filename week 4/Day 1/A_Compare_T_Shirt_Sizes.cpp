#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        if(s1==s2) cout<<"=\n";
        else
        {
            if(s1[s1.size()-1]==s2[s2.size()-1])
            {
                if(s1[s1.size()-1]=='S')
                {
                    if(s1.size()>s2.size()) cout<<"<\n";
                    else cout<<">\n";
                }
                else if(s1[s1.size()-1]=='L')
                {
                    if(s1.size()>s2.size()) cout<<">\n";
                    else cout<<"<\n";
                }
            }
            else
            {
                if(s1[s1.size()-1]=='S' && s2[s2.size()-1]=='M' || s1[s1.size()-1]=='S' && s2[s2.size()-1]=='L' ||s1[s1.size()-1]=='M' && s2[s2.size()-1]=='L')
                {
                    cout<<"<\n";
                }
                else if(s1[s1.size()-1]=='M' && s2[s2.size()-1]=='S' || s1[s1.size()-1]=='L' && s2[s2.size()-1]=='S' ||s1[s1.size()-1]=='L' && s2[s2.size()-1]=='M')
                {
                    cout<<">\n";
                }
            }
        }
    }
    return 0;
} 