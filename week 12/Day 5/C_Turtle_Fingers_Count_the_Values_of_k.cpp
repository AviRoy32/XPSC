#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> div(ll n)
{
    vector<ll> v;
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (i != n / i)
            {
                v.push_back(n / i);
            }
        }
    }
    return v;
}

bool ans(ll a, ll b, ll l, ll k)
{
    ll x = l / k;
    while (x % a == 0) x /= a;
    while (x % b == 0) x /= b;
    return x == 1;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, l;
        cin >> a >> b >> l;
        set<ll>s;
        ll i=0;
        while(pow(a,i)<=l)
        {
            ll j=0;
            while(pow(b,j)<=l)
            {
                ll ans=pow(a,i)*pow(b,j);

                if(l%ans==0)
                {
                    s.insert(l/ans);
                }
                j++;
            }
            i++;
        }
        cout << s.size() << endl;
    }
}
