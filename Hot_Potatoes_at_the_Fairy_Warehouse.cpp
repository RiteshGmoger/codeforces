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
	ll n{},k{}; cin>>n>>k;
	string s{}; cin>>s;

	int red{},blue{};
	for(int i{};i<2*n;++i)
	{
		if(i%2 == 0 && s[i] == '1') red++;
		else if(i%2 == 1 && s[i] == '1') blue++;
	}

	for(int i{};i<2*n;++i)
	{
		if(s[i] == '1' && s[(i+1)%(2*n)] == '0')
		{
			if(i%2 == 0)
			{
				red--;
				blue++;
			}
			else
			{
				red++;
				blue--;
			}
		}
	}

	cout<<blue<<' '<<red<<'\n';
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
