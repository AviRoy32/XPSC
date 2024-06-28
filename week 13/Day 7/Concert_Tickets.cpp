#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() 
{
    ll n, m;
    cin>>n>>m;
    multiset<ll>tickets;
    for (ll i=0;i<n;i++) {
        ll h;
        cin >> h;
        tickets.insert(h);
    }
    while(m--)
    {
        ll t;
        cin>>t;
        auto it = tickets.upper_bound(t);
        if (it == tickets.begin()) cout << -1 << '\n';
        else 
        {
            --it;
            cout << *it << '\n';
            tickets.erase(it);
        }
    }
    return 0;
}
