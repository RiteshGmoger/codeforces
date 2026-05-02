#include <bits/stdc++.h>
using namespace std;

struct Node {
    int ch[2];
    Node() { ch[0] = ch[1] = -1; }
};

struct Trie {
    vector<Node> t;
    Trie() { t.push_back(Node()); }

    void insert(int x) {
        int v = 0;
        for (int b = 30; b >= 0; --b) {
            int bit = (x >> b) & 1;
            if (t[v].ch[bit] == -1) {
                t[v].ch[bit] = (int)t.size();
                t.push_back(Node());
            }
            v = t[v].ch[bit];
        }
    }

    int query(int x) {
        int v = 0, res = 0;
        for (int b = 30; b >= 0; --b) {
            int bit = (x >> b) & 1;
            int want = bit ^ 1;
            if (t[v].ch[want] != -1) {
                res |= (1 << b);
                v = t[v].ch[want];
            } else {
                v = t[v].ch[bit];
            }
        }
        return res;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        Trie tr;
        tr.insert(a[0]);
        int ans = 0;

        for (int i = 1; i < n; ++i) {
            ans = max(ans, tr.query(a[i]));
            tr.insert(a[i]);
        }

        cout << ans << '\n';
    }
    return 0;
}
