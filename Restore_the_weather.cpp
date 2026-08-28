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
	int n{}; ll k{};
	cin>>n>>k;
	vll a(n),b(n);
	for(auto& it : a) cin>>it;
	for(auto& it : b) cin>>it;

	vector<pair<int,int>> vp{};
	for(int i{};i<n;++i) vp.pb({a[i],i});

	sort(vp.begin(),vp.end());
	sort(b.begin(),b.end());

	for(int i{};i<n;++i) vp[i].ff = b[i];

	sort(vp.begin(),vp.end(),[](auto& a,auto& b) {return a.second < b.second;});

	for(auto& it : vp) cout<<it.ff<<' ';
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
