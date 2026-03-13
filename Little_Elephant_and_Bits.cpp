#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    bool removed = false;

    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            s.erase(i, 1);
            removed = true;
            break;
        }
    }

    if (!removed) {
        s.pop_back();
    }

    int pos = 0;
    while (pos < s.size() && s[pos] == '0')
        pos++;

    if (pos == s.size())
        cout << "0\n";
    else
        cout << s.substr(pos) << '\n';

    return 0;
}

