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

	int mx = *max_element(all(a));

	bool same{true};
	for(int i{};i<n-1;++i)
	{
		if(a[i] != a[i+1])
		{
			same = false;
			break;
		}
	}

	if(same)
	{
		cout<<"No\n";
		return;
	}
	cout<<"Yes\n";

	for(int i{};i<n;++i)
	{
		if(a[i] == mx) cout<<"1 ";
		else cout<<"2 ";
	}
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
