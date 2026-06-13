#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<int> st;
    vector<pair<int,int>> pairs; // matched '(' , ')'

    for (int i = 0; i < n; ++i) {
        if (s[i] == '(') {
            st.push_back(i);
        } else {
            if (!st.empty()) {
                int j = st.back();
                st.pop_back();
                pairs.push_back({j, i});
            }
        }
    }

    string ans(n, '0');
    int take = min(k, (int)pairs.size());

    for (int i = 0; i < take; ++i) {
        ans[pairs[i].first] = '1';   // delete the '(' of this pair
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
