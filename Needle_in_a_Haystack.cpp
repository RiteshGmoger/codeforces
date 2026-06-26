#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;

    vector<int> cnt(26, 0);
    for (char c : t) cnt[c - 'a']++;

    for (char c : s) {
        if (cnt[c - 'a'] == 0) {
            cout << "Impossible\n";
            return;
        }
        cnt[c - 'a']--;
    }

    string rem;
    for (int i = 0; i < 26; i++) {
        rem.append(cnt[i], char('a' + i));
    }

    string ans;
    int i = 0, j = 0;

    while (i < (int)s.size() && j < (int)rem.size()) {
        if (s[i] <= rem[j]) ans.push_back(s[i++]);
        else ans.push_back(rem[j++]);
    }

    while (i < (int)s.size()) ans.push_back(s[i++]);
    while (j < (int)rem.size()) ans.push_back(rem[j++]);

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}
