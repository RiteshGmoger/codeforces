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

bool dfs(auto& adj,auto& vis,int node)
{
    vis[node] = true;

    bool ok = (adj[node].size() == 2);

    for(auto& it : adj[node])
    {
        if(!vis[it])
            ok = dfs(adj,vis,it) && ok;
    }

    return ok;
}

void solve()
{
    int n{},m{}; cin>>n>>m;

    vector<vector<int>> adj(n+1);
    vector<bool> visited(n+1,false);

    for(int i{};i<m;++i)
    {
        int a{},b{}; cin>>a>>b;

        adj[a].pb(b);
        adj[b].pb(a);
    }

    int ans{};

    for(int i{1};i<=n;++i)
    {
        if(visited[i]) continue;

        if(dfs(adj,visited,i)) ans++;
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
