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
	vi a(n); for(auto& it : a) cin>>it;

	unordered_map<int,int> mp{};

	for(int i{};i<n;++i) mp[a[i]]++;

	vi tmp{};
	for(auto&[a,b] : mp) tmp.pb(a);
	sort(all(tmp));

	while(tmp.size() > 0)
	{
		int n = tmp.size();
		if(mp[tmp[n-1]]%2 == 0)
		{
			cout<<"Yes\n";
			return;
		}
		if(n == 1)
		{
			cout<<"No\n";
			return;
		}
		if(tmp[n-1]-tmp[n-2] <= k)
		{
			cout<<"Yes\n";
			return;
		}

		tmp.pop_back();
	}

	cout<<"No\n";
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
