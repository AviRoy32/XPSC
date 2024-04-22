#include <bits/stdc++.h>
using namespace std;

int check_kth_bit_on_or_off(long long x, int k) {
    return (x >> k) & 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<char> a, p, q;
        for (int k = 31; k >= 0; k--) {
            if (check_kth_bit_on_or_off(n, k)) a.push_back('1');
            else a.push_back('0');
        }
        int c = 0;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == '0') {
                p.push_back('0');
                q.push_back('0');
            } else if (a[i] == '1' && c == 0) {
                p.push_back('0');
                q.push_back('1');
                c++;
            } else if (a[i] == '1' && c >= 1) {
                p.push_back('1');
                q.push_back('0');
            }
        }
        string s = "", r = "";
        int valp = 0, valq = 0;
        for (int i = 0; i < p.size(); i++) {
            //s += p[i];
            valp = 2 * valp + (p[i] - '0');
        }
        for (int i = 0; i < q.size(); i++) {
            //r += q[i];
            valq = 2 * valq + (q[i] - '0');
        }
        cout << valp << " " << valq << '\n';
    }
    return 0;
}
