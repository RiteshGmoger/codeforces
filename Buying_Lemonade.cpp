#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void work() {
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (auto &x : a) cin >> x;

    sort(a.begin(), a.end());

    ll cur = 0;
    ll prev = 0;

    for (ll i = 0; i < n; ++i) {
        cur += (a[i] - prev) * (n - i);
        if (cur >= k) {
            cout << k + i << '\n';
            return;
        }
        prev = a[i];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) work();
}
