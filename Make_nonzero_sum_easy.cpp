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
	if(n%2 == 1)
	{
		cout<<-1<<'\n';
		return;
	}
	int cnt{};
	vector<pair<int,int>> p{};

	for(int i{};i<n;i+=2)
	{
		if(a[i] == a[i+1])
		{
			cnt++;
			p.pb({i+1,i+2});
		}
		else
		{
			cnt += 2;
			p.pb({i+1,i+1});
			p.pb({i+2,i+2});
		}
	}

	cout<<cnt<<'\n';
	for(auto& it : p) cout<<it.ff<<' '<<it.ss<<'\n';
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
