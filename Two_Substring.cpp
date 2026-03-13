#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();

    // Try AB first, then BA
    size_t pos = s.find("AB");
    if (pos != string::npos) {
        if (s.find("BA", pos + 2) != string::npos) {
            cout << "YES\n";
            return 0;
        }
    }

    // Try BA first, then AB
    pos = s.find("BA");
    if (pos != string::npos) {
        if (s.find("AB", pos + 2) != string::npos) {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
    return 0;
}


