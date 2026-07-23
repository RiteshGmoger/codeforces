#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
using ll  = long long;
using ull = unsigned long long;
using ld  = long double;
using i128  = __int128;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi  = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;

#define all(x)   (x).begin(),(x).end()
#define rall(x)  (x).rbegin(),(x).rend()
#define pb       push_back
#define eb       emplace_back
#define ff       first
#define ss       second


void solve(){
	long long x, y, k; cin>>x>>y>>k;
	while (k > 0 && x != 1) {
		long long ost = (x / y + 1) * y - x;
                ost = max(1ll, ost);
                ost = min(ost, k);
                x += ost;
		while (x % y == 0) {
			x /= y;
		}
		k -= ost;
	}
	cout << x + k % (y - 1) << '\n';
}
 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t{1};
	cin >> t;
	while(t--) solve();

	return 0;
}
