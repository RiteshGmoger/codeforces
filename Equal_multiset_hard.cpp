#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<int> need(n + 1, 0); // values needed by constant chains
        bool ok = true;

        for (int r = 0; r < k; r++) {
            vector<int> pos, vals;
            for (int i = r; i < n; i += k) {
                pos.push_back(i);
                vals.push_back(a[i]);
            }

            bool all_equal = true;
            for (int i = 1; i < (int)vals.size(); i++) {
                if (vals[i] != vals[0]) {
                    all_equal = false;
                    break;
                }
            }

            if (!all_equal) {
                // This whole chain is forced to equal a.
                for (int idx : pos) {
                    if (b[idx] != -1 && b[idx] != a[idx]) {
                        ok = false;
                        break;
                    }
                }
            } else {
                // This chain must be constant, but the constant can be any value.
                int fixed = -1;
                for (int idx : pos) {
                    if (b[idx] != -1) {
                        if (fixed == -1) fixed = b[idx];
                        else if (fixed != b[idx]) ok = false;
                    }
                }
                if (!ok) break;

                need[vals[0]]++;
                if (fixed != -1) {
                    need[fixed]--;
                }
            }

            if (!ok) break;
        }

        if (ok) {
            for (int v = 1; v <= n; v++) {
                if (need[v] < 0) {
                    ok = false;
                    break;
                }
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}
