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

const ll MOD = 1e9+7;

ll modpow(ll base, ll exp)
{
    	ll ans = 1;
    	while(exp > 0)
    	{
        	if(exp & 1) ans = ans * base % MOD;

        	base = base * base % MOD;
        	exp >>= 1;
    	}
	return ans;
}

void solve()
{
	int k{}; cin>>k;
	ll ans = (1LL << k);

	cout<<6LL * modpow(4,ans-2) % MOD<<'\n';
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t{1};
	//cin >> t;
	while(t--) solve();

	return 0;
}
