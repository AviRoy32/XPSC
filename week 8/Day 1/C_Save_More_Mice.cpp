#include<bits/stdc++.h>
using namespace std;
int32_t main () 
{
    int t;
    cin>>t;
    while(t--) 
    {
        int h,n;
        cin>>h>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        int cat = 0;
        int cnt = 0;
        for(int i=n-1;i>=0;i--) 
        {
            if(cat<v[i]) 
            {
                cnt ++;
                cat = cat + (h-v[i]);
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}