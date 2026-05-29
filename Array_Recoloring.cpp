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
	int n{},k{}; cin>>n>>k;
	vll a(n); for(auto& it : a) cin>>it;

	if(k == 1)
	{
		if (n == 2) cout << a[0] + a[1] << '\n';
		else
		{
			ll mx = *max_element(a.begin()+1, a.end()-1);
			ll ans = max({mx + a[0], mx + a[n-1], a[0] + a[n-1]});
			cout << ans << '\n';
		}
		return;
	}

	ll sum{};
	sort(rall(a)); k++;
	int i{};
	while(k--)
	{
		sum += a[i];
		i++;
	}

	cout<<sum<<'\n';
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
