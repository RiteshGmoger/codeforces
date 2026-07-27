#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s;
    cin >> n >> s;

    vector<int> a(n);

    for (int &x : a)
        cin >> x;

    int l = 0;
    int sum = 0;
    int best = -1;

    for (int r = 0; r < n; r++) {

        sum += a[r];

        while (l <= r && sum > s) {
            sum -= a[l];
            l++;
        }

        if (sum == s) {
            best = max(best, r - l + 1);
        }
    }

    if (best == -1)
        cout << -1 << '\n';
    else
        cout << n - best << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}
