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

	if(n == 2)
	{
		cout<<"1 2 1 1 2 2 1 2\n";
		return;
	}

	vi a(n); for(int i{1};i<=n;++i) a[i-1] = i;

	for(int i{};i<n;++i) cout<<a[i]<<' ';

	for(int i{1};i<=3;++i)
	{
		for(int x : a) cout<< x <<' ';

		rotate(a.begin(),a.end()-i%n,a.end());
	}
	cout<<'\n';
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
