#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<bool> visit(n+1,false);
        long long sum = 0;
        for (int k = 1; k <= n; ++k) 
        {
            for (int j = k; j <= n; j += k) 
            {
                if (s[j - 1] == '1')  break;
                else if (!visit[j]) 
                {
                    sum += k; 
                    visit[j] = true;
                }
            }
        }
        cout << sum << '\n';
    }
    return 0;
}
