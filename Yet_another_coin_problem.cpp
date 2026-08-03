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

ll getans(ll n)
{
	ll ans = n/15;
	n%=15;
	ans += n/6;
	n%=6;
	ans += n/3;
	n%=3;
	ans += n;

	return ans;
}

void solve()
{
	ll n{}; cin>>n;

	if(n < 10) cout<<getans(n);
	else if(n < 20) cout<<min(getans(n),getans(n-10)+1);
	else cout<<min({getans(n),getans(n-10)+1,getans(n-20)+2});

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
