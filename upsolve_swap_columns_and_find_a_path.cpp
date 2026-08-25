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
	vi a(n),b(n),bi(n);
	for(auto& it : a) cin>>it;
	for(auto& it : b) cin>>it;
	int sum{};
	
	for(int i{};i<n;++i)
	{
		sum += max(a[i],b[i]);
		bi[i] = min(b[i],a[i]);
	}
	int ans = INT_MIN;

	for(auto& it : bi)
		ans = max(ans,sum+it);

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
