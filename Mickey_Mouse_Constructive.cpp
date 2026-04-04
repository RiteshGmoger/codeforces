#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;

        long long S = x - y;

        long long ans;
        if (S == 0) {
            ans = 1;
        } else {
            long long d = llabs(S);
            ans = 0;
            for (long long i = 1; i * i <= d; i++) {
                if (d % i == 0) {
                    ans++;
                    if (i * i != d) ans++;
                }
            }
        }

        cout << ans << "\n";

        if (S == 0) {
            for (int i = 0; i < x; i++) cout << 1 << ' ';
            for (int i = 0; i < y; i++) cout << -1 << ' ';
        } else if (S > 0) {
            for (int i = 0; i < y; i++) cout << -1 << ' ';
            for (int i = 0; i < x; i++) cout << 1 << ' ';
        } else {
            for (int i = 0; i < x; i++) cout << 1 << ' ';
            for (int i = 0; i < y; i++) cout << -1 << ' ';
        }
        cout << "\n";
    }

    return 0;
}
