#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() 
{
    ll n, x;
    cin >> n >> x;
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++) 
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    for (ll i = 0; i < n; i++) 
    {
        ll sum = x - a[i].first;
        ll l = i + 1, r = n - 1;
        while (l < r) 
        {
            if (a[l].first + a[r].first == sum) 
            {
                cout << a[i].second << " " << a[l].second << " " << a[r].second;
                return 0;
            } 
            else if (a[l].first + a[r].first < sum)  l++;      
             else r--;
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}
