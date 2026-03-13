#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x, y, n;
        cin >> x >> y >> n;

        long long k = n - (n % x) + y;
        if (k > n) k -= x;

        cout << k << "\n";
    }
    return 0;
}

