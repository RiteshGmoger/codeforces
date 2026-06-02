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
	vll a(n); for(auto& it : a) cin>>it;

	ll sum = accumulate(all(a),0LL);
	sort(all(a));

	if(a[n-1] - a[0] - 1 > k)
	{
		cout<<"Jerry\n";
		return;
	}
	if(a[n-2] - a[0] > k)
	{
		cout<<"Jerry\n";
		return;
	}

	sum--;
	if(sum%2 == 0) cout<<"Tom\n";
	else cout<<"Jerry\n";
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
