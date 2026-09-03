#include <bits/stdc++.h>
using namespace std;

vector<int> get_best3(const vector<int>& a) {
    int mx1 = -1, mx2 = -1, mx3 = -1;

    for (int i = 0; i < (int)a.size(); i++) {
        if (mx1 == -1 || a[i] > a[mx1]) {
            mx3 = mx2;
            mx2 = mx1;
            mx1 = i;
        }
        else if (mx2 == -1 || a[i] > a[mx2]) {
            mx3 = mx2;
            mx2 = i;
        }
        else if (mx3 == -1 || a[i] > a[mx3]) {
            mx3 = i;
        }
    }

    return {mx1, mx2, mx3};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n), c(n);

        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;
        for (int &x : c) cin >> x;

        vector<int> bestA = get_best3(a);
        vector<int> bestB = get_best3(b);
        vector<int> bestC = get_best3(c);

        int ans = 0;

        for (int x : bestA) {
            for (int y : bestB) {
                for (int z : bestC) {

                    if (x != y && x != z && y != z) {
                        ans = max(ans, a[x] + b[y] + c[z]);
                    }
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
