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
	vector<vector<int>> adj(n+1);

	for(int i{};i<m;++i)
	{
		int a{},b{}; cin>>a>>b;

		adj[a].pb(b);
		adj[b].pb(a);
	}

	vector<bool> visited(n+1,false);
	vector<int> str{};

	for(int i{};i<n;++i)
	{
		if(!visited[i+1])
		{
			str.pb(i+1);
			queue<int> q{};
			q.push(i+1);

			while(!q.empty())
			{
				int front = q.front();
				q.pop();

				for(auto& it : adj[front])
				{
					if(!visited[it])
					{
						visited[it] = true;
						q.push(it);
					}
				}
			}
		}
	}

	cout<<str.size()-1<<'\n';

	for(int i{1};i<(int)str.size();++i) cout<<str[i]<<' '<<str[i-1]<<'\n';
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
