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
	ll n{},k{}; cin>>n>>k;
	
	if(n%2 == 0)
	{
		ll ans = n / (k-1);

		if(n%(k-1) > 0) cout<<ans+1<<'\n';
		else cout<<ans<<'\n';

		return;
	}

	ll cnt = (n-k) / (k-1) + 1;
	if((n-k)%(k-1) > 0) cout<<cnt+1<<'\n';
	else cout<<cnt<<'\n';
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
