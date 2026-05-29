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

static inline ll lcm_ll(ll x, ll y) {
    return x / std::gcd(x, y) * y;
}

void solve()
{
	int n{}; cin>>n;
	vll a(n),b(n);
	for(auto& it : a) std::cin>>it;
	for(auto& it : b) std::cin>>it;

    	int ans = 0;

	for (int i = 0; i < n; ++i)
	{
        	ll best;

        	if(n == 1) best = 0;
		else if(i == 0)
            		best = std::gcd(a[0], a[1]);
		else if(i == n - 1)
        		best = std::gcd(a[n - 2], a[n - 1]);
		else
		{
           		ll g1 = std::gcd(a[i - 1], a[i]);
            		ll g2 = std::gcd(a[i], a[i + 1]);
            		best = lcm_ll(g1, g2);
		}
        	if (best < a[i]) ans++;
	}

	cout << ans << '\n';
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
