#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        vector<int> pos;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') pos.push_back(i);
        }

        if (pos.empty()) {
            cout << "0 0\n";
            continue;
        }

        int mn = 0, mx = 0;

        int l = pos[0], r = pos[0];
        for (int i = 1; i < (int)pos.size(); ++i) {
            if (pos[i] - pos[i - 1] >= 3) {
                int len = r - l + 1;
                mn += (len + 2) / 2;
                mx += len;
                l = r = pos[i];
            } else {
                r = pos[i];
            }
        }

        int len = r - l + 1;
        mn += (len + 2) / 2;
        mx += len;

        cout << mn << ' ' << mx << '\n';
    }

    return 0;
}
