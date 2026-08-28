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
	vi w(n); for(auto& it : w) cin>>it;

	if(n == 1)
	{
		cout<<0<<'\n';
		return;
	}

	vi old(59+1),frq{};
	int end{100},ans{};

	for(auto& it : w) old[it]++;

	for(int sum{2};sum<=end;++sum)
	{
		frq = old;
		int mx{};

		for(auto& it : w)
		{
			int val = sum - it;
			if(val < 1 || val > 50) continue;
			if(frq[it] == 0 || frq[val] == 0) continue;
			if(val == it && frq[val] == 1) continue;

			frq[it]--; frq[val]--; mx++;
		}

		ans = max(mx,ans);
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
