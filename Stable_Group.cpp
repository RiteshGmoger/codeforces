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
	ll n{},k{},x{}; cin>>n>>k>>x;
	vll a(n); for(auto& it : a) cin>>it;

	if(n == 1)
	{
		cout<<1<<'\n';
		return;
	}

	ll ans{};
	vll srt{},ed{};
	sort(all(a));

	for(int i{1};i<(int)n;i++)
	{
		srt.pb(i-1);
		while(i < n && (a[i] - a[i-1]) <= x) i++;
		ed.pb(i-1);
		ans++;
		if(i == n-1) srt.pb(i),ed.pb(i),ans++;
	}

	ll m = srt.size();
	vll str(m);
	for(int i{1};i<m;++i) str[i] = a[srt[i]] - a[ed[i-1]];

	sort(all(str));
	for(int i{1};i<m;++i)
	{
		ll tmp = (str[i]-1) / x;

		if((k - tmp) < 0) break;
		k -= tmp;
		ans--;
	}

	cout<<ans<<'\n';
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t{1};
	//cin >> t;
	while(t--) solve();

	return 0;
}
