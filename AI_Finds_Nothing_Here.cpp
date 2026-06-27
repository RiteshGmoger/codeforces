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

static const ll MOD = 998244353;

ll power(ll& val)
{
	ll ans{1},base{2};

	while(val > 0)
	{
		if(val%2 == 1) ans = (ans*base) % MOD;

		base = (base*base) % MOD;
		val /= 2;
	}

	return ans;
}

void solve()
{
	ll n{},m{},r{},c{}; cin>>n>>m>>r>>c;

	ll notforced = 1LL*(r-1) * m + 1LL*(c-1) * n - 1LL * (r-1)*(c-1);

	cout<<power(notforced)<<'\n';
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
