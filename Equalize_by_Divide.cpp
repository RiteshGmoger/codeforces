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
        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        bool all_equal = true;
        for (int i = 1; i < n; ++i) {
            if (a[i] != a[0]) {
                all_equal = false;
                break;
            }
        }

        if (all_equal) {
            cout << 0 << '\n';
            continue;
        }

        bool has_one = false;
        for (auto x : a) if (x == 1) has_one = true;

        if (has_one) {
            cout << -1 << '\n';
            continue;
        }

        vector<pair<int,int>> ops;

        while (true) {
            int p = 0;
            for (int i = 1; i < n; ++i) {
                if (a[i] < a[p]) p = i;
            }

            long long mn = a[p];
            bool restarted = false;

            for (int i = 0; i < n; ++i) {
                if (i == p) continue;

                while (a[i] > mn) {
                    a[i] = (a[i] + mn - 1) / mn;
                    ops.push_back({i + 1, p + 1});
                }

                if (a[i] < mn) {
                    restarted = true;
                    break;
                }
            }

            if (!restarted) break;
        }

        cout << ops.size() << '\n';
        for (auto [i, j] : ops) {
            cout << i << ' ' << j << '\n';
        }
    }

    return 0;
}
