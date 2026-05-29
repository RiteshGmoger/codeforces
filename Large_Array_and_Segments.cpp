#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        ll k, x;
        cin >> n >> k >> x;

        vector<ll> a(n);
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        ll total = sum * k;
        if (total < x) {
            cout << 0 << '\n';
            continue;
        }

        ll ans = 0;
        ll pref = 0; // sum of elements before current position inside one block

        for (int i = 0; i < n; i++) {
            ll remain = total - x - pref;
            if (remain >= 0) {
                ans += remain / sum + 1;
            }
            pref += a[i];
        }

        cout << ans << '\n';
    }

    return 0;
}
