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
	int n{},m{},q{}; cin>>n>>m>>q;
	vi a(n),b(m);
	for(auto& it : a) cin>>it;
	for(auto& it : b) cin>>it;

	vector<bool> str(n+1,false);
	int j{};

	for(int i{};i<m;++i)
	{
		if(j == n) j = n-1;
		if(a[j] != b[i])
		{
			if(str[b[i]] == true) continue;

			cout<<"TIDAK\n";
			return;
		}

		str[a[j]] = true;
		j++;
	}

	cout<<"YA\n";
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
