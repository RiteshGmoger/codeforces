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

bool dp(auto& a,int i,int j)
{
	if(i == 0 || j == 0) return true;
	int x = i;

	while(i >= 0 && a[i][j] == '1') i--;
	while(j >= 0 && a[x][j] == '1') j--;

	if(i == -1 || j == -1) return true;
	return false;
}

void solve()
{
	int n{},m{}; cin>>n>>m;
	vector<string> v(n);
	for(int i{};i<n;++i) cin>>v[i];

	vector<pii> p{};
	for(int i{};i<n;++i)
		for(int j{};j<m;++j)
			if(v[i][j] == '1') p.pb({i,j});

	bool ok{true};
	for(int i{};i<(int)p.size();++i)
	{
		if(!dp(v,p[i].ff,p[i].ss))
		{
			ok = false;
			break;
		}
	}

	if(ok) cout<<"Yes\n";
	else cout<<"No\n";
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
