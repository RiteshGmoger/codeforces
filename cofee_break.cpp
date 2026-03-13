#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, d;
    cin >> n >> m >> d;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<pair<int,int>> arr;
    for (int i = 0; i < n; i++)
        arr.push_back({a[i], i});

    sort(arr.begin(), arr.end()); 
    queue<pair<int,int>> q; 

    vector<int> ans(n); 
    int dayCount = 0;

    for (auto &p : arr) {
        int minute = p.first;
        int idx = p.second;
        if (q.empty() || q.front().first + d >= minute) {
            dayCount++;
            ans[idx] = dayCount;
            q.push({minute, dayCount});
        } else {
            auto best = q.front();
            q.pop();

            ans[idx] = best.second; 
            q.push({minute, best.second}); 
        }
    }

    cout << dayCount << "\n";
    for (int x : ans) cout << x << " ";
    cout << "\n";

    return 0;
}

