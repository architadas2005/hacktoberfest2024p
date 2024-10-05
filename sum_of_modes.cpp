#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int r=0;r<t;r++) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        n = s.size();
        long long res = n * (n + 1LL) / 2; 
        map<int, int> cnts;
        cnts[0] = 1;
        int a = 0, b = 0;
        for (char c : s) {
            if (c == '0') {
                a++;
            } 
            else {
                b++;
            }
            int diff = a - b;
            if (cnts.find(diff) != cnts.end()) {
                res += cnts[diff];
                cnts[diff]++;
            }
            else {
                cnts[diff] = 1;
            }
        }
        cout << res << endl;
    }
    return 0;
}
