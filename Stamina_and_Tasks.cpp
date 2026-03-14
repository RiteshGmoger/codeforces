#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed << setprecision(10);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> c(n), p(n);
        for (int i = 0; i < n; i++) cin >> c[i] >> p[i];

        vector<double> g(n + 1, 0.0);
        for (int i = n - 1; i >= 0; i--)
            g[i] = max(g[i + 1], c[i] + (1.0 - p[i] / 100.0) * g[i + 1]);

        cout << g[0] << "\n";
    }
}
