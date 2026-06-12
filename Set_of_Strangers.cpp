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
	vvi a(n,vector<int>(m));
	for(int i{};i<n;++i)
		for(int j{};j<m;++j) cin>>a[i][j];

	vi b(n*m+1,0);
	for(int i{};i<n;++i)
	{
		for(int j{};j<m;++j)
		{
			int tmp = a[i][j];
			
			if(b[tmp] == 0) b[tmp] = 1;

			if((i+1 < n && a[i+1][j] == tmp) ||
				(j+1 < m && a[i][j+1] == tmp)) b[tmp] = 2;
		}
	}

	int cnt{},mx{};
	for(int i{1};i<n*m+1;++i)
	{
		cnt += b[i];
		mx = max(mx,b[i]);
	}

	cout<<cnt - mx<<'\n';
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
