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
	string a{},b{}; cin>>a>>b;

	if(n < 3)
	{
		for(int i{};i<n;++i)
		{
			if(a[i] != b[i])
			{
				cout<<"No\n";
				return;
			}
		}
		cout<<"Yes\n";
		return;
	}
	int aoone{},aeone{},beone{},boone{};

	for(int i{};i<n;++i)
	{
		if(a[i] == '1')
		{
			if(i%2 == 0) aoone++;
			else aeone++;
		}
		if(b[i] == '1')
		{
			if(i%2 == 0) boone++;
			else beone++;
		}
	}

	if(aeone == beone && aoone == boone) cout<<"Yes\n";
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
