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
	int zeroth_cnt{},oneth_cnt{};

	for(int i{};i<n;++i)
	{
		if(i%2 == 0 && b[i] == '0') zeroth_cnt++;
		else if(i%2 == 1 && b[i] == '0') oneth_cnt++;
	}

	for(int i{};i<n;++i)
	{
		if(a[i] == '1')
		{
			if(i%2 == 0) oneth_cnt--;
			else zeroth_cnt--;
		}

		if(oneth_cnt == -1 || zeroth_cnt == -1)
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
