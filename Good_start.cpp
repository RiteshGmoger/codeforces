#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void work() {
    ll w, h, a, b, x1, y1, x2, y2;
    cin >> w >> h >> a >> b >> x1 >> y1 >> x2 >> y2;

    if (x1 == x2) {
        cout << (llabs(y1 - y2) % b == 0 ? "Yes\n" : "No\n");
    } else if (y1 == y2) {
        cout << (llabs(x1 - x2) % a == 0 ? "Yes\n" : "No\n");
    } else {
        cout << (((x1 - x2) % a == 0 || (y1 - y2) % b == 0) ? "Yes\n" : "No\n");
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) work();
}
