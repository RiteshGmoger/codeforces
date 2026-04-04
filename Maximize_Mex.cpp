#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    long long x;
    cin >> n >> x;

    unordered_map<long long, priority_queue<long long, vector<long long>, greater<long long>>> mp;

    for (int i = 0; i < n; i++) {
        long long v;
        cin >> v;
        mp[v % x].push(v);
    }

    long long mex = 0;
    while (true) {
        long long r = mex % x;
        auto it = mp.find(r);
        if (it == mp.end() || it->second.empty() || it->second.top() > mex) break;
        it->second.pop();
        mex++;
    }

    cout << mex << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) work();
    return 0;
}
