#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

using vi = vector<int>;

void solve() {
    int n;
    cin >> n;

    vi a(n + 1), dp(n + 1);
    vector<deque<int>> pos(n + 1);

    for (int i = 1;i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++) {
        dp[i] = dp[i - 1];

        pos[a[i]].push_back(i);

        if ((int)pos[a[i]].size() > a[i])
            pos[a[i]].pop_front();

        if ((int)pos[a[i]].size() == a[i]) {
            int l = pos[a[i]].front();
            dp[i] = max(dp[i], dp[l - 1] + a[i]);
        }
    }

    cout << dp[n] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}
