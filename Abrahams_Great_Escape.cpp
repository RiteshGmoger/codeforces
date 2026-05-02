#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n, k;
    cin >> n >> k;

    if (k == n * n - 1) {
        cout << "NO\n";
        return;
    }

    vector<string> g(n, string(n, 'R'));

    for (int i = 0; i < n; ++i) {
        g[i][n - 1] = 'L';
    }

    int full = k / n;
    int rem = k % n;

    for (int i = 0; i < full; ++i) {
        for (int j = 0; j < n; ++j) g[i][j] = 'U';
    }

    if (rem > 0) {
        for (int j = 0; j < rem; ++j) g[full][j] = 'U';

        if (n - rem == 1) {
            g[full][rem] = 'D';
        } else {
            for (int j = rem; j < n - 1; ++j) g[full][j] = 'R';
            g[full][n - 1] = 'L';
        }
    }

    cout << "YES\n";
    for (auto &row : g) cout << row << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) work();

    return 0;
}
