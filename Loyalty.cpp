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
	int n{},x{}; cin>>n>>x;
	vll a(n); for(auto& it : a) cin>>it;

	sort(rall(a));
	ll ans{},total{};
	vll order{};
	int l{},r{n-1};

	while(l <= r)
	{
		if(total + a[l] >= x)
		{
			ans += a[l];
			total = (total + a[l]) % x;
			order.pb(a[l]);
			l++;
		}
		else
		{
			total += a[r];
			order.pb(a[r]);
			r--;
		}
	}

	cout<<ans<<'\n';
	for(int i{};i<n;++i)
		cout<<order[i]<<(i+1 == n ? '\n' : ' ');
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
