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
	unordered_map<int,vector<int>> mp{};
	int ans{INT_MAX};
	if(mp.size() == 1)
	{
		cout<<0<<'\n';
		return;
	}

	for(int i{};i<n;++i)
		mp[a[i]].push_back(i);

	for(auto& [key,vec] : mp)
	{
		int s = vec.size();
		int tmp{};
		for(int i{1};i<s;++i)
		{
			if(vec[i-1]+1 == vec[i]) continue;
			tmp++;
		}
		if(vec[0] != 0) tmp++;
		if(vec[s-1] != n-1) tmp++;

		ans = min(tmp,ans);
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
