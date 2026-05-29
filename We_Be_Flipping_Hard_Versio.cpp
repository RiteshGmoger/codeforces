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
	vll a(n);
	for(auto& it : a) cin>>it;

	vll ans{};
	ll cnt{},start{-1};

	for(ll i{n-1};i>=0;--i)
	{
		if(a[i] > 0)
		{
			start = i;
			break;
		}
	}

	ll sum{},mx{LLONG_MAX};
	for(ll j{};j<=start;++j) sum += abs(a[j]);

	for(ll i{start};i>=0;--i)
	{
		if(a[i] > 0)
		{
			if(sum - a[i] < mx)
			{
				mx = sum - a[i];
				start = i;
			}
		}
		sum -= a[i];
	}

	ll i{start-1};
	while(i >= 0)
	{
		if(a[i] > 0)
		{
			cnt++;
			ans.pb(i+1);

			i--;
			while(i >= 0 && a[i] > 0) i--;
			if(i < 0) break;

			cnt++;
			ans.pb(i+1);
		}
		i--;
	}

	cout<<cnt+1<<'\n';
	for(auto& it : ans) cout<<it<<' ';
	std::cout<<start+1<<'\n';
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
