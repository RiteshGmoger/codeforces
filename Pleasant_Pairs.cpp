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

        vector<int> pos(2 * n + 1, 0);

        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            pos[x] = i;
        }

        long long ans = 0;

        for (int x = 1; x <= 2 * n; x++) {
            if (pos[x] == 0) continue;

            for (int y = 1; x * y <= 2 * n; y++) {
                if (y <= x) continue;      // avoid duplicates and self-pairs
                if (pos[y] == 0) continue;

                if (pos[x] + pos[y] == x * y)
                    ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
