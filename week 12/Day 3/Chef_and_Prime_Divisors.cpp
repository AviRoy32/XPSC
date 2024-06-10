#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{  
    int t;
    cin>>t;
    while(t--)
   { 
     ll  a,b;
     cin>>a>>b;
     ll g=__gcd(a,b);
     bool flag=true;
     while(b!=1)
     {  
        if(g==1) 
        { 
            flag=false; 
            break; 
        }
	    b=b/g;
        g=__gcd(b,g); 
        flag=true;
     }
     if(flag) cout<<"Yes\n"; 
     else cout<<"No\n";
  }
	return 0;
}