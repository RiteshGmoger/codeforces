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

ll binpow(ll a)
{
	ll ans{1},val{2};

	while(a > 0)
	{
		if(a & 1) ans =  1LL * ans * val % MOD;
		val = 1LL * val * val % MOD;
		a >>= 1;
	}

	return ans;
}

void solve()
{
	ll n{},m{},r{},c{}; cin>>n>>m>>r>>c;

	ll ans = 1LL*(r-1)*m + 1LL*(c-1)*n - 1LL*(c-1)*(r-1);

	cout<<binpow(ans)<<'\n';
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
