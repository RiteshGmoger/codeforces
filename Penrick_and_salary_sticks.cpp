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
	vi p(n); for(auto& it : p) cin>>it;

	for(int i{n-1};i>=0;--i)
	{
		if(p[i] == i+1) continue;
		else if(i != 0 && p[i-1] == i+1 && abs(p[i]-p[i-1]) == 1) swap(p[i],p[i-1]);
		else
		{
			cout<<"No\n";
			return;
		}
	}

	cout<<"Yes\n";
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
