#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() 
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i =0;i<n;i++) cin>>a[i];
    map<ll, ll> mp;
    ll l = 0,r=0, mx = 0;
    while(r<n) 
    {
        if (mp.find(a[r]) != mp.end() && mp[a[r]] >= l) 
        {
            l = mp[a[r]] + 1;
        }
        mp[a[r]] = r; 
        mx = max(mx, r - l + 1); 
        r++;
    }
    cout << mx << endl;
    return 0;
}
