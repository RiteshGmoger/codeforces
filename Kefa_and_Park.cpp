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

int ans{};

void dfs(vi& a,int m,int cnt,int cur,vvi& adj)
{
	if(adj[cur].empty())
	{
		if(cnt <= m) ans++;
		return;
	}

	for(auto& it : adj[cur])
	{
		if(a[it-1] == 1) dfs(a,m,cnt+1,it,adj);
		else dfs(a,m,0,it,adj);
	}
}

void solve()
{
	int n{},m{}; cin>>n>>m;
	vi a(n); for(auto& it : a) cin>>it;
	vvi adj(n+1);

	for(int i{};i<n-1;++i)
	{
		int a{},b{}; cin>>a>>b;
		adj[a].pb(b);
	}
	int val{};
	if(a[0] == 1) val = 1;

	dfs(a,m,val,1,adj);

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
