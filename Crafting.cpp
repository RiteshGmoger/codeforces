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
	ll n{}; cin>>n;
	vll a(n),b(n);
	for(auto& it : a) cin>>it;
	for(auto& it : b) cin>>it;

	ll mn{-1},mx{LLONG_MAX},cnt{};
	for(int i{};i<n;++i)
	{
		if(b[i] > a[i])
		{
			cnt++;
			mn = abs(b[i]-a[i]);
		}
		else mx = std::min(mx, abs(b[i]-a[i]));

		if(cnt > 1)
		{
			cout<<"No\n";
			return;
		}
	}

	if(mn <= mx) cout<<"Yes\n";
	else cout<<"No\n";
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
