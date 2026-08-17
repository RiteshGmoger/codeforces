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
	vll a(n),b(m);
	for(auto& it : a) cin>>it;
	for(auto& it : b) cin>>it;

	ll bea{},ver{};
	for(int i{1};i<n;++i) bea += a[i-1]-a[i]+1;
	for(int i{1};i<m;++i) ver += b[i-1]-b[i]+1;
	bea += a[n-1];
	ver += b[m-1];

	if(bea >= ver) cout<<"1\n";
	else cout<<"2\n";
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
