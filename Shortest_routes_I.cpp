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
	vector<vector<pair<int,ll>>> adj(n+1);

	for(int i{};i<m;++i)
	{
		int a{},b{}; ll c{};
		cin>>a>>b>>c;

		adj[a].push_back({b,c});
	}

	priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<>> pq;
	vector<ll> dist(n+1,LLONG_MAX);
	vector<bool> vis(n+1);
	pq.push({0,1});
	dist[1] = 0;

	while(!pq.empty())
	{
		auto[val,pos] = pq.top();
		pq.pop();

		if(vis[pos]) continue;
		vis[pos] = true;

		for(auto& [u,w] : adj[pos])
		{
			if(!vis[u] && dist[u] > dist[pos] + w)
			{
				dist[u] = dist[pos] + w;
				pq.push({dist[u],u});
			}
		}
	}

	for(int i{1};i<=n;++i)
		cout<<dist[i]<<' ';
	cout<<'\n';
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
