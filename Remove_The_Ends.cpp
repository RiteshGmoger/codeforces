#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void work() {
    int n;
    cin >> n;
    vector<ll> a(n + 1);

    for (int i = 1; i <= n; i++) cin >> a[i];

    vector<ll> pref(n + 1, 0), suff(n + 2, 0);

    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + max(0LL, a[i]);
    }

    for (int i = n; i >= 1; i--) {
        suff[i] = suff[i + 1] + max(0LL, -a[i]);
    }

    ll ans = 0;
    for (int k = 0; k <= n; k++) {
        ans = max(ans, pref[k] + suff[k + 1]);
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) work();

    return 0;
}
