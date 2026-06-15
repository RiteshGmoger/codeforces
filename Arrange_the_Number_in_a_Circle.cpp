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
	ll n{}; cin>>n;
	vll c(n); for(auto& it : c) cin>>it;

	ll one{},sum{},left{};
	for(int i{};i<n;++i)
	{
		if(c[i] == 1) one++;
		else left += c[i]/2 -1;
	}

	sum = accumulate(c.begin(),c.end(),0LL);

	if(one == n-1) left++;
	ll waste = max(0LL,one - left);

	if(sum - waste < 3) cout<<0<<'\n';
	else cout<<sum - waste<<'\n';
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
