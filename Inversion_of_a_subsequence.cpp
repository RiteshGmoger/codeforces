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
	vi a(n),b(n);
	int cnta{},cntb{};
	for(auto& it : a)
	{
		cin>>it;
		cnta += it;
	}
	for(auto& it : b)
	{
		cin>>it;
		cntb += it;
	}

	int one{},zero{};
	for(int i{};i<n;++i)
	{
		if(a[i] == 1 && a[i] != b[i]) one++;
		if(a[i] == 0 && a[i] != b[i]) zero++;
	}

	if(zero == 0 && one == 0) cout<<0<<'\n';
	else if(cnta == 0) cout<<-1<<'\n';
	else if(one%2 == 1) cout<<1<<'\n';
	else if(cntb < n) cout<<2<<'\n';
	else cout<<-1<<'\n';
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
