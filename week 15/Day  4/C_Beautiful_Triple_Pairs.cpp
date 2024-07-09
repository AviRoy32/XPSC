#include<bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;
int32_t main () 
{
   
    int t;cin>>t;while(t--) 
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        map<tuple<int,int,int>,int> mp;
        for(int i=0;i<n-2;i++) {
            int a = v[i],b=v[i+1],c=v[i+2];
            mp[make_tuple(a,b,c)]++;
        }
        map<pair<int,int>,int> x;
        map<pair<int,int>,int> y;
        map<pair<int,int>,int> z;

        for(auto it:mp) {
            tuple i = it.first;
            int a=get<0>(i),b=get<1>(i),c=get<2>(i);
            x[make_pair(a,b)] += it.second;
            y[make_pair(a,c)] += it.second;
            z[make_pair(b,c)] += it.second;
        }
        int cnt = 0;
        for(auto it:mp) {
            tuple i = it.first;
            int a=get<0>(i),b=get<1>(i),c=get<2>(i);
            cnt+=(x[make_pair(a,b)]-it.second)*it.second;
            cnt+=(y[make_pair(a,c)]-it.second)*it.second;
            cnt+=(z[make_pair(b,c)]-it.second)*it.second;
        }
        cout<<cnt/2<<endl;
    }
    return 0;
}