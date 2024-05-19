#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int min_score = INT_MAX;
        for (int i = 0; i < n; i++) {
            int max_diff = 0;

            if (i > 0) {
                max_diff = max(max_diff, abs(a[i] - a[i - 1]));
            }
            if (i < n - 1) {
                max_diff = max(max_diff, abs(a[i] - a[i + 1]));
            }
            min_score = min(min_score, max_diff);
        }

        cout << min_score << '\n';
    }

    return 0;
}