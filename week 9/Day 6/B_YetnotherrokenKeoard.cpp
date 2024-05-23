#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        stack<pair<int, char>> st, bt;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B')
            {
                if (st.size()) st.pop(); 
            }
            else if (s[i] == 'b')
            {
                if (bt.size()) bt.pop(); 
            }
            else if (s[i] >= 'A' && s[i] <= 'Z') st.push(make_pair(i, s[i])); 
            else bt.push(make_pair(i, s[i]));
        }
        vector<pair<int, char>> v;
        while (!st.empty())
        {
            v.push_back(st.top());
            st.pop();
        }
        while (!bt.empty())
        {
            v.push_back(bt.top());
            bt.pop();
        }
        sort(v.begin(), v.end());
        for (auto ch : v) cout << ch.second;
        cout << '\n';
    }
    return 0;
}
