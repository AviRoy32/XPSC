#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long n,x;
    cin>>n>>x;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int count = 0;
    long long sum = 0;
    int l = 0,r=0;
    while(r<n)
    {
        sum += a[r];
        r++;
        while (sum >x && l <=r) 
        {
            sum -= a[l];
            l++;
        }

        if (sum == x) count++;
    }
    cout << count << endl;

    return 0;
}
