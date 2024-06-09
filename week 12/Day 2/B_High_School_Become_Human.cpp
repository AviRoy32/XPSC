#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    // ios_base:: sync_with_stdio(false);
    // cin.tie(NULL);
    ll x, y;
    cin >> x >> y;
    if(x==y)
    {
        cout<<'=';
        return 0;
    }
    long double a = y * log(x); 
    long double b = x * log(y); 
    if (a > b) cout << '>';
    else if (a < b) cout << '<';    
    else if(a==b)cout << '=';   
    return 0;
}
