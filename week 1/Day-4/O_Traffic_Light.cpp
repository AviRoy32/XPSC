#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        string new_s = s + s;
        vector<int> v; 
        int minIndex = INT_MAX, maxIndex; 
        for (int i = 0; i < 2 * n; i++) 
        {
            if (new_s[i] == c) 
            {
                if (i <= minIndex) 
                {
                    minIndex = i;
                }
            }
            if (new_s[i] == 'g') 
            {
                maxIndex = i;
                v.push_back(maxIndex - minIndex);
                minIndex = INT_MAX;
            }
        }
         
            cout << *max_element(v.begin(), v.end()) << '\n';
    }

    return 0;
}
