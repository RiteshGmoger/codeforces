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
	int m{}; cin>>m;
	vvi a(2,vector<int>(m));
	for(int i{};i<2;++i)
		for(int j{};j<m;++j) cin>>a[i][j];

	vector<int> pref(m+1),suf(m+2);
	for(int i{1};i<=m;++i)
		pref[i] = a[0][i-1] + pref[i-1];
	for(int j{m};j>0;--j)
		suf[j] = a[1][j-1] + suf[j+1];

	int mx{-1},mn{INT_MAX};
	for(int i{1};i<=m;++i)
	{
		mx = max(suf[1]-suf[i],pref[m]-pref[i]);
		mn = min(mx,mn);
	}
	
	cout<<mn<<'\n';
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
