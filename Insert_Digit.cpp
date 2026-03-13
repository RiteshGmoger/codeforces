#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, d;
        cin >> n >> d;

        string s;
        cin >> s;

        char digit = d + '0';
        bool inserted = false;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] < digit) {
                s.insert(i, 1, digit);
                inserted = true;
                break;
            }
        }

        if (!inserted) {
            s.push_back(digit);
        }

        cout << s << '\n';
    }

    return 0;
}

