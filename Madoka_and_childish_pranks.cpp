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
	int n{},m{}; cin>>n>>m;
	vector<string> v(n); for(auto& it : v) cin>>it;
	vector<pair<int,int>> x{},y{};;
	int cnt{};
	if(v[0][0] == '1')
	{
		cout<<-1<<'\n';
		return;
	}

	for(int i{n-1};i>=1;--i)
	{
		for(int j{m-1};j>=1;--j)
		{
			if(v[i][j] == '1')
			{
				cnt++;
				x.pb({i+1,j});
				y.pb({i+1,j+1});
			}
		}
		if(v[i][0] == '1')
		{
			cnt++;
			x.pb({i,1});
			y.pb({i+1,1});
		}
	}
	for(int i{m-1};i>=1;--i)
	{
		if(v[0][i] == '1')
		{
			cnt++;
			x.pb({1,i});
			y.pb({1,i+1});
		}
	}

	cout<<cnt<<'\n';
	for(int i{};i<(int)x.size();++i) cout<<x[i].ff<<' '<<x[i].ss<<' '<<y[i].ff<<' '<<y[i].ss<<'\n';
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
