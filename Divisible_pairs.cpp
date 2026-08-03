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
	ll n{},x{},y{}; cin>>n>>x>>y;
	vll a(n); for(auto& it : a) cin>>it;

	map<pair<ll,ll>,ll> mp;
	ll ans{};

	for(ll i{};i<n;++i)
	{
		ll xx = a[i]%x;
		ll yy = a[i]%y;

		ans += mp[{(x-xx)%x,yy}];
		mp[{xx,yy}]++;
	}

	cout<<ans<<'\n';
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
