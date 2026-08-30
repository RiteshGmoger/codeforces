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
	vi a(n); for(auto& it : a) cin>>it;

	vi str(m+2);
	sort(all(a));
	int i{};
	while(i < n)
	{
		int val = a[i];
		str[val] = n-i;

		while(i < n && val == a[i]) i++;
	}

	for(int i{m};i>0;--i)
		str[i] = max(str[i],str[i+1]);

	int ans{};
	for(int i{1};i<=m;++i)
	{
		if(i*2 <= m) str[i] += str[i*2]-str[i*2+1];

		ans = max(ans,str[i]);
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
