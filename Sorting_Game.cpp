#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string sorted = s;
    sort(sorted.begin(), sorted.end());

    if (s == sorted) {
        cout << "Bob\n";
        return;
    }

    vector<int> idx;
    for(int i = 0; i < n; ++i) {
        if(s[i] != sorted[i]) {
            idx.push_back(i + 1);
        }
    }

    cout << "Alice\n";
    cout << idx.size() << '\n';
    for(auto i : idx) cout << i << " ";
    cout << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int ttt = 1;
    cin >> ttt;
    while(ttt--) {
        solve();
    }
}
