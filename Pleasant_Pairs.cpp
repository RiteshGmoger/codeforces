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

        vector<int> a(n + 1), pos(2 * n + 1, 0);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pos[a[i]] = i;
        }

        long long ans = 0;

        for (int i = 1; i <= n; i++) {
            // smallest multiple of a[i] that is > a[i]
            for (int prod = 2 * a[i]; prod <= 2 * n; prod += a[i]) {
                int other = prod / a[i];

                if (other > 2 * n || pos[other] == 0)
                    continue;

                int j = pos[other];

                if (i < j && i + j == prod)
                    ans++;
            }
        }

        cout << ans << '\n';
    }
}
