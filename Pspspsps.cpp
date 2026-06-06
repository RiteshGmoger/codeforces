#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    bool hasP = false;
    bool hasS = false;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'p') hasP = true;
    }

    for (int i = 1; i < n; i++) {
        if (s[i] == 's') hasS = true;
    }

    cout << ((hasP && hasS) ? "NO\n" : "YES\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve();
}
