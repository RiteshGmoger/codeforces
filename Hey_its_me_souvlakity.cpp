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
	string s{}; cin>>s;

	int start{-1},end{-1},cnt{};

	for(int i{};i<n;++i)
	{
		if(s[i] == '1')
		{
			if(start == -1) start = i;
			else end = i;
			cnt++;
		}
	}
	if(cnt == 1) cout<<0<<'\n';
	else if(cnt == 2) cout<<1<<'\n';
	else cout<<end-start<<'\n';
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
