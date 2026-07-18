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
	ll n{},m{},k{}; cin>>n>>k>>m;

	if(m < k)
	{
		cout<<"No\n";
		return;
	}
	cout<<"Yes\n";
	vi ans(k);

	for(int i{};i<(int)k-1;++i) ans[i] = 1;
	ans[k-1] = m-k+1;

	for(int i{};i<(int)k;++i) cout<<ans[i]<<' ';
	for(int i=k;i<(int)n;++i) cout<<ans[i%k]<<' ';
	cout<<'\n';
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
