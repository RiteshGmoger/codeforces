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


void solve()
{
	int n; cin >> n;
    
	vector<long long> a(n);
    	long long total_sum = 0;
    	long long max_val = 0;

    	bool has_even = false;
    	bool has_odd = false;

    	for (int i = 0; i < n; ++i) {
        	cin >> a[i];
        	total_sum += a[i];
        	max_val = max(max_val, a[i]);

        	if (a[i] % 2 == 0) has_even = true;
		else has_odd = true;
    	}

    	if (has_even && has_odd) cout << total_sum << "\n";
     	else cout << max_val << "\n";
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
