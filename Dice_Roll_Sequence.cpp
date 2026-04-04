#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (auto &x : a) cin >> x;

        int ans = n; // worst case

        // try each value as base
        for (int val = 1; val <= 6; val++) {
            int changes = 0;

            vector<int> b = a;

            for (int i = 0; i < n - 1; i++) {
                if (b[i] == b[i+1] || b[i] + b[i+1] == 7) {
                    // fix by changing b[i+1]
                    b[i+1] = val;
                    changes++;
                }
            }

            ans = min(ans, changes);
        }

        cout << ans << '\n';
    }
}
