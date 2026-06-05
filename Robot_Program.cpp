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
	ll n{},x{},k{}; cin>>n>>x>>k;
	string s{}; cin>>s;

	ll first{-1},val{x};
	for(int i{};i<n;++i)
	{
		if(s[i] == 'L') val--;
		else val++;

		if(val == 0)
		{
			first = i+1;
			break;
		}
	}

	if(first == -1 || first > k)
	{
		cout<<0<<'\n';
		return;
	}

	ll pos = -1;
	val = 0;
	for(int i{};i<n;++i)
	{
		if(s[i] == 'L') val--;
		else val++;

		if(val == 0)
		{
			pos = i+1;
			break;
		}
	}

	if(pos == -1)
	{
		cout<<1<<'\n';
		return;
	}

	cout<<(k - first) / pos + 1<<'\n';
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
