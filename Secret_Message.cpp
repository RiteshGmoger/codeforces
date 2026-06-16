#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;

        vector<string> a(k);
        for (int i = 0; i < k; i++) cin >> a[i];

        vector<int> mask(n, 0);

        // mask[pos] = letters available at this position
        for (int pos = 0; pos < n; pos++) {
            int m = 0;
            for (int row = 0; row < k; row++) {
                m |= (1 << (a[row][pos] - 'a'));
            }
            mask[pos] = m;
        }

        vector<int> divisors;
        for (int d = 1; d * d <= n; d++) {
            if (n % d == 0) {
                divisors.push_back(d);
                if (d * d != n) divisors.push_back(n / d);
            }
        }

        sort(divisors.begin(), divisors.end());

        string answer;

        for (int d : divisors) {
            string pattern(d, '?');
            bool ok = true;

            for (int r = 0; r < d; r++) {
                int common = (1 << 26) - 1;

                for (int pos = r; pos < n; pos += d) {
                    common &= mask[pos];
                }

                if (common == 0) {
                    ok = false;
                    break;
                }

                pattern[r] = char('a' + __builtin_ctz(common));
            }

            if (ok) {
                answer.clear();
                for (int i = 0; i < n; i++) {
                    answer += pattern[i % d];
                }
                break;
            }
        }

        cout << answer << '\n';
    }

    return 0;
}
