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
	vll a(n); for(auto& it : a) cin>>it;
	vll pref(n+1);
	for(int i{};i<n;++i) pref[i+1] = pref[i]^a[i];

	if(pref[n] == 0 || n == 1)
	{
		cout<<"Yes\n";
		return;
	}

	bool ans{};
	for(int i{1};i<=n;++i)
		for(int j{i+1};j<=n;++j)
			ans |= ((pref[i] == (pref[j]^pref[i])) && (pref[i] == (pref[n]^pref[j])));

	cout<<(ans ? "Yes\n" : "No\n");
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
