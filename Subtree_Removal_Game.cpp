#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<int>> children(n + 1);
    for (int i = 2; i <= n; ++i) {
        int p;
        cin >> p;
        children[p].push_back(i);
    }

    auto check = [&](int v) -> bool {
        vector<int> d(n + 1, 0);

        for (int u = n; u >= 1; --u) {
            if (children[u].empty()) {
                d[u] = (u <= v ? 1 : -1);
            } else {
                int sum = 0;
                for (int ch : children[u]) sum += d[ch];
                if (sum > 0) d[u] = 1;
                else if (sum < 0) d[u] = -1;
                else d[u] = 0;
            }
        }

        return d[1] >= 0; // first player wins
    };

    int lo = 1, hi = n;
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        if (check(mid)) hi = mid;
        else lo = mid + 1;
    }

    cout << lo << '\n';
    return 0;
}
