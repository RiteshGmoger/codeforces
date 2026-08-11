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

void dfs(int stp,int strt,auto& visited,auto& graph)
{
	if(visited[strt] == true) return;
	visited[strt] = true;

	for(int& it : graph[strt])
	{
		if
	}
}

void solve()
{
	int n{},st{},sn{}; cin>>n>>st>>sn;
	vector<vector<int>> graph(n);

	for(int i{1};i<n;++i)
	{
		int x{},y{}; cin>>x>>y;
		graph[x].pb(y);
		graph[v].pb(u);
	}

	vector<bool> visited(n,false);
	dfs(stp,strt,visited,graph);
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
