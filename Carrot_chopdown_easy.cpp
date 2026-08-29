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
	vector<int> str(m+2);
	int i{};
	sort(all(a));

	while(i < n)
	{
		int tmp = a[i];
		str[a[i]] = n-i;

		while(i < n && tmp == a[i]) i++;
	}

	int ans{};
	for(int i{m-1};i>=1;--i)
		str[i] = max(str[i],str[i+1]);

	for(int i{1};i<=m;++i)
	{
		int val = str[i];

		if(2*i <= m) val += str[2*i]-str[2*i+1];

		ans = max(ans,val);
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
