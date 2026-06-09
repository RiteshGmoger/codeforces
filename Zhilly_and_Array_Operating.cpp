#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        long long cur = a[n - 1];
        int ans = (cur > 0);

        for (int i = n - 2; i >= 0; i--) {
            cur = a[i] + max(0LL, cur);
            if (cur > 0) ans++;
        }

        cout << ans << '\n';
    }
}
