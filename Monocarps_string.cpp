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

	int cur = count(s.begin(),s.end(),'a') - count(s.begin(),s.end(),'b');
	map<int,int> mp{};
	mp[0] = -1;
	int val{},ans{n};

	for(int i{};i<n;++i)
	{
		val += s[i] == 'a' ? 1 : -1;
		mp[val] = i;
		if(mp.count(val - cur)) ans = min(ans, i - mp[val - cur]);
	}
	cout<<(ans == n ? -1 :ans)<<'\n';
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
