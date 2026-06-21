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
	ll n{},x{}; cin>>n>>x;
	vvi abc(n,vi(3));
	for(int i{};i<n;++i)
		for(int j{};j<3;++j) cin>>abc[i][j];

	ll mx{},start{};
	for(int i{};i<n;++i)
	{
		mx = max(mx,1LL*abc[i][0]*abc[i][1] - abc[i][2]);
		start += 1LL * abc[i][0] * (abc[i][1]-1);
	}

	x -= start;
	if(x <= 0)
	{
		cout<<0<<'\n';
		return;
	}
	if(mx <= 0)
	{
		cout<<-1<<'\n';
		return;
	}

	cout<<(x+mx-1)/mx<<'\n';
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
