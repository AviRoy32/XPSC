#include<bits/stdc++.h>
using namespace std;

int main() 
{
    long long n, s, c = 0;
    cin >> n >> s;

    for (long long i = 0; i <= n; i++) 
    {
        for (long long j = 0; j <= n; j++) 
        {
            long long k = s - i - j;
            if (i+j+k==s)
                c++;
        }
    }
    
    cout << c;
    return 0;
}
