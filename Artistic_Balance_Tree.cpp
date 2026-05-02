#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll bestSum(vector<ll> &arr, int k) {
	if (!k || arr.empty()) return 0;
	sort(arr.begin(), arr.end(), [](ll a, ll b) { return a > b; });
	ll ans = arr[0];
	int lim = min(k, (int)arr.size());
	for (int i = 1; i < lim; i++) {
		if (arr[i] <= 0) break;
		ans += arr[i];
	}
	return ans;
}

void solve() {
	int n, m;
	cin >> n >> m;
	vector<ll> op, ep;
	ll tot = 0;
	for (int i = 0; i < n; i++) {
		ll a;
		cin >> a;
		tot += a;
		if (i % 2 == 0) op.push_back(a);
		else ep.push_back(a);
	}
	int oc = 0, ec = 0;
	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;
		if (x & 1) oc++;
		else ec++;
	}
	ll sub = bestSum(op, oc) + bestSum(ep, ec);
	cout << tot - sub << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) solve();
}
