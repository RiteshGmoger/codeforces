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
	vi a(n); for(auto& it : a) cin>>it;

	int odd{},even{};
	for(auto& it : a)
	{
		if(it%2 == 0) even++;
		else odd++;
	}

	if(odd%2 == 0) cout<<"Moggity\n";
	else if((even == 1 && odd == 1) || (even == 0 && odd == 3)) cout<<"Larpity\n";
	else cout<<"Moggity\n";
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
