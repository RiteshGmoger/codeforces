#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1), b(n + 1);
    for (int i = 1; i <= n; ++i) cin >> a[i];
    for (int i = 1; i <= n; ++i) cin >> b[i];

    vector<int> dp(2, 1), ndp(2);

    for (int i = 2; i <= n; ++i) {
        ndp[0] = ndp[1] = 0;

        for (int prev = 0; prev < 2; ++prev) {
            int pa = (prev ? b[i - 1] : a[i - 1]);
            int pb = (prev ? a[i - 1] : b[i - 1]);

            for (int cur = 0; cur < 2; ++cur) {
                int ca = (cur ? b[i] : a[i]);
                int cb = (cur ? a[i] : b[i]);

                if (pa <= ca && pb <= cb) {
                    ndp[cur] = (ndp[cur] + dp[prev]) % MOD;
                }
            }
        }

        dp = ndp;
    }

    cout << (dp[0] + dp[1]) % MOD << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
