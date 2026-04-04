#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (n % 2 == 0) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";
    for (int i = 1; i <= n; i++) {
        if (i % 2) cout << 2 * i - 1 << ' ';
        else cout << 2 * i << ' ';
    }
    for (int i = 1; i <= n; i++) {
        if (i % 2) cout << 2 * i << ' ';
        else cout << 2 * i - 1 << ' ';
    }
    cout << '\n';
    return 0;
}
