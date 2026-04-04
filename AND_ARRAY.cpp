#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;

long long pw(long long a, long long b) {
    long long r = 1; a %= MOD;
    for (; b; b >>= 1) { if (b & 1) r = r * a % MOD; a = a * a % MOD; }
    return r;
}

const int MAXN = 100005;
long long fact[MAXN], inv_fact[MAXN];

void precompute() {
    fact[0] = 1;
    for (int i = 1; i < MAXN; i++) fact[i] = fact[i-1] * i % MOD;
    inv_fact[MAXN-1] = pw(fact[MAXN-1], MOD-2);
    for (int i = MAXN-2; i >= 0; i--) inv_fact[i] = inv_fact[i+1] * (i+1) % MOD;
}

long long C(int n, int k) {
    if (k < 0 || k > n) return 0;
    return fact[n] % MOD * inv_fact[k] % MOD * inv_fact[n-k] % MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    precompute();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> b(n+1);
        for (int i = 1; i <= n; i++) cin >> b[i];

        vector<int> mj(29, 0);

        for (int m = n; m >= 1; m--) {
            long long Vm = b[m];
            if (Vm == 0) continue;
            for (int k = 1; k < m; k++)
                b[k] = (b[k] - Vm * C(m, k) % MOD + MOD) % MOD;
            for (int j = 0; j < 29; j++)
                if ((Vm >> j) & 1) mj[j] = m;
        }

        vector<long long> a(n, 0);
        for (int j = 0; j < 29; j++)
            for (int i = 0; i < mj[j]; i++)
                a[i] |= (1LL << j);

        for (int i = 0; i < n; i++) cout << a[i] << " \n"[i==n-1];
    }
    return 0;
}
