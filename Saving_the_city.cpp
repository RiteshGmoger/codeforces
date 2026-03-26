#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;

        int n = s.size();

        // trim
        int l = 0, r = n - 1;
        while(l < n && s[l] == '0') l++;
        while(r >= 0 && s[r] == '0') r--;

        if(l > r) {
            cout << 0 << "\n";
            continue;
        }

        int ans = a;
        int zeros = 0;

        for(int i = l; i <= r; i++) {
            if(s[i] == '0') zeros++;
            else {
                if(zeros > 0) {
                    ans += min(a, zeros * b);
                    zeros = 0;
                }
            }
        }

        cout << ans << "\n";
    }
}
