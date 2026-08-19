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

void dfs(vector<string>& map,int i,int j,int n,int m)
{
	if(i < 0 || i >= n || j < 0 || j >= m || map[i][j] == '#') return;

	map[i][j] = '#';

	dfs(map,i+1,j,n,m);
	dfs(map,i,j+1,n,m);
	dfs(map,i-1,j,n,m);
	dfs(map,i,j-1,n,m);
}

void solve()
{
	int n{},m{}; cin>>n>>m;
	vector<string> map(n);
	for(auto& it : map) cin>>it;
	int ans{};

	for(int i{};i<n;++i)
	{
		for(int j{};j<m;++j)
		{
			if(map[i][j] != '#')
			{
				ans++;
				dfs(map,i,j,n,m);
			}
		}
	}

	cout<<ans<<'\n';
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
