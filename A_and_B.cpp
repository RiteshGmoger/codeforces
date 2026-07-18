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

	long long left{},right{},tmp{};
	vi a{},b{};

	for(int i{};i<n;++i)
	{
		if(s[i] == 'a') a.push_back(i);
		else b.push_back(i);
	}
	if(a.empty() || b.empty())
	{
		cout<<0<<'\n';
		return;
	}

	int v1 = a[a.size()/2];
	int v2 = b[b.size()/2];

	for(int i{v1+1};i<n;++i)
	{
		if(s[i] == 'a') left += tmp;
		else tmp++;
	}
	tmp = 0;
	for(int i{v1-1};i>=0;--i)
	{
		if(s[i] == 'a') left += tmp;
		else tmp++;
	}
	tmp = 0;
	for(int i{v2+1};i<n;++i)
	{
		if(s[i] == 'b') right += tmp;
		else tmp++;
	}
	tmp = 0;
	for(int i{v2-1};i>=0;--i)
	{
		if(s[i] == 'b') right += tmp;
		else tmp++;
	}

	cout<<min(left,right)<<'\n';
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
