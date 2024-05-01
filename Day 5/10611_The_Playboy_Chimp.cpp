#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) 
        cin >> a[i];
    sort(a.begin(), a.end());
    ll q;
    cin >> q;
    while(q--) {
        ll key;
        cin >> key;
        ll l = 0, r = n - 1, mid, shorter = -1, taller = -1;
        while(l <= r) {
            mid = (l + r) / 2;
            if(key > a[mid]) {
                shorter = mid;
                l = mid + 1;
            } else r = mid - 1;
        }
        l = 0, r = n - 1; // Reset l and r for the second binary search
        while(l <= r) {
            mid = (l + r) / 2;
            if(key < a[mid]) {
                taller = mid;
                r = mid - 1;
            } else l = mid + 1;
        }
        if(shorter == -1) 
            cout << "X" << " ";
        else 
            cout << a[shorter] << " ";
        if(taller == -1) 
            cout << "X" << '\n';
        else 
            cout << a[taller] << '\n';
    }
    return 0;
}
