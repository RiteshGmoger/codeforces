#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll countPairs(vector<ll>& v, ll bound) {
    int n = v.size();
    int l = 0, r = n - 1;
    ll count = 0;

    while (l < r) {
        if (v[l] + v[r] <= bound) {
            count += (r - l);
            l++;
        } else {
            r--;
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        ll x, y;
        cin >> n >> x >> y;

        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        ll total = accumulate(v.begin(), v.end(), 0LL);

        ll L = total - y;
        ll R = total - x;

        ll ans = countPairs(v, R) - countPairs(v, L - 1);

        cout << ans << "\n";
    }
}
