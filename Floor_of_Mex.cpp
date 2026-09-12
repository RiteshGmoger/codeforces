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
	int n{}; cin>>n;
	vi a(n); for(auto& it : a) cin>>it;

	vector<bool> ans(n);
	vector<pair<int,int>> p{};

	for(int i{};i<n;++i) p.pb({a[i],i+1});
	sort(all(p));
	int i{};

	while(i < n)
	{
		int val = p[i].ff;
		int tmp{};

		if(val == 0)
		{
			i++;
			continue;
		}
		while(i != 0 && val == p[i-1].ff)
		{
			i++;
			tmp = p[i].ss;
		}

		int tmp1{};
		while(tmp--)
		{
			ans[tmp1] = true;
			tmp1 += val;
		}
	}
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
