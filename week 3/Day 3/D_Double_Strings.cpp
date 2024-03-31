#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <string> v(n);
        set<string>st;
        vector<int>result(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            st.insert(v[i]);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                string s1="",s2="";
                for(int k=0;k<j;k++)
                {
                    s1+=v[i][k];
                }
                for(int k=j;k<v[i].size();k++)
                {
                    s2+=v[i][k];
                }
                if(st.find(s1)!=st.end() && st.find(s2)!=st.end())
                {
                    result[i]=1;
                    break;
                }
            }
            cout<<result[i];
        }
        cout<<'\n';
    } 
    return 0;
}