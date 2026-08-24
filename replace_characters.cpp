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

	unordered_map<int,int> mp{};
	for(char c : s) mp[c-'a']++;

	if(mp.size() == 1)
	{
		cout<<s<<'\n';
		return;
	}

	int mn{INT_MAX},sml{},big{},mx{};
	for(auto&[val,cnt] : mp)
	{
		if(cnt < mn)
		{
			mn = cnt;
			sml = val;
		}
		if(cnt >= mx)
		{
			mx = cnt;
			big = val;
		}
	}

	for(int i{};i<n;++i)
	{
		if(s[i]-'a' == sml && mp[sml] == 1) cout<<(char)(big+'a');
		else cout<<s[i];

		mp[s[i]-'a']--;
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
