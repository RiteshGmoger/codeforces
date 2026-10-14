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
	int n{},k{}; cin>>n>>k;
	vll a(n); for(auto& it : a) cin>>it;
	vll pref(n+1);

	for(int i{1};i<=n;++i)
		pref[i] = (pref[i-1] + a[i-1]) % k;

	vll freq(k,0);
	ll ans{};
	for(int i{};i<=n;++i)
	{
		if(i-k-1 >= 0) freq[pref[i-k-1]]++;
		ans += freq[pref[i]];
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
