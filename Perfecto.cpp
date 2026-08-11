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

bool isSquare(long long x)
{
	long long r = sqrtl((long double)x);

	while((r + 1) * (r + 1) <= x) ++r;
	while(r * r > x) --r;

	return r * r == x;
}

void solve()
{
	int n{}; cin>>n;

	long long sum = 1LL*n*(n+1) / 2;
	if(isSquare(sum))
	{
		cout<<-1<<'\n';
		return;
	}

	vi ans(n);
	sum = 0;
	for(int i{};i<n;++i) ans[i] = i+1;

	for(int i{};i<n;++i)
	{
		sum += ans[i];
		if(isSquare(sum))
		{
			swap(ans[i],ans[i+1]);
			sum -= ans[i+1];
			sum += ans[i];
		}
	}

	for(auto& it : ans) cout<<it<<' ';
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
