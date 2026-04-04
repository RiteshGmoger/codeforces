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

        int L = n - k;   // 0-indexed start of middle block
        int R = k - 1;   // 0-indexed end of middle block

        vector<int> inMiddle(n + 1, 0), used(n + 1, 0);
        for (int i = L; i <= R; i++) {
            inMiddle[a[i]] = 1;
        }

        bool ok = true;

        for (int i = 0; i < n; i++) {
            if (i < L || i > R) {
                if (b[i] != -1 && b[i] != a[i]) {
                    ok = false;
                    break;
                }
            } else {
                if (b[i] != -1) {
                    if (!inMiddle[b[i]] || used[b[i]]) {
                        ok = false;
                        break;
                    }
                    used[b[i]] = 1;
                }
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}
