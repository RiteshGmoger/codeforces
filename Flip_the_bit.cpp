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

        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        int p;
        cin >> p;
        --p;

        int x = a[p];

        int left = 0, right = 0;

        for (int i = 0; i < p; ) {
            if (a[i] != x) {
                ++left;
                while (i < p && a[i] != x) ++i;
            } else {
                ++i;
            }
        }

        for (int i = p + 1; i < n; ) {
            if (a[i] != x) {
                ++right;
                while (i < n && a[i] != x) ++i;
            } else {
                ++i;
            }
        }

        cout << 2 * max(left, right) << '\n';
    }
    return 0;
}
