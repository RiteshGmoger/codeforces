#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<string> adj(n);
    for (int i = 0; i < n; ++i) {
        cin >> adj[i];
    }

    // Initialize the permutation with values 1 to n
    vector<int> p(n);
    iota(p.begin(), p.end(), 1);

    // Sort the vertices based on the relative ordering rules
    sort(p.begin(), p.end(), [&](int u, int v) {
        // We use 0-indexed adjustment for the matrix: adj[u-1][v-1]
        if (u < v) {
            // If u < v, u comes before v only if there is an edge
            return adj[u - 1][v - 1] == '1';
        } else {
            // If u > v, u comes before v only if there is NO edge
            return adj[u - 1][v - 1] == '0';
        }
    });

    for (int i = 0; i < n; ++i) {
        cout << p[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
