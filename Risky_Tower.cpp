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
	int n{},m{}; cin>>n>>m;
	vll v(n); for(auto& it : v) cin>>it;
	vector<vector<ll>> a(n,vector<ll>(m));
	for(int i{};i<n;++i)
		for(int j{};j<m;++j)
			cin>>a[i][j];
	vll best(m);
	ll ans{m};

	for(int i{n-1};i>=0;--i)
	{
		for(int j{};j<m;++j) best.pb(a[i][j]);

		sort(rall(best));
		if((int)best.size() > m) best.resize(m);

		int k{};
		ll cnt{};
		while(k < (int)best.size() && v[i] > 0)
		{
			cnt++;
			v[i] -= best[k++];
		}

		ans = min(ans,cnt);
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
