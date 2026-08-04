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
				cout<<"-1\n";
				return;
			}
		}
		cout<<"0\n";
		return;
	}

	vector<int> aeven{},aodd{},beven{},bodd{};
	for(int i{};i<n;++i)
	{
		if(a[i] == '1')
		{
			if(i%2 == 1) aeven.pb(i);
			else aodd.pb(i);
		}
		if(b[i] == '1')
		{
			if(i%2 == 1) beven.pb(i);
			else bodd.pb(i);
		}
	}

	if(aeven.size() != beven.size() || aodd.size() != bodd.size())
	{
		cout<<"-1\n";
		return;
	}

	ll val{};
	for(int i{};i<(int)aeven.size();++i)
		val += llabs((ll)aeven[i] - beven[i])/2;
	for(int i{};i<(int)aodd.size();++i)
		val += llabs((ll)aodd[i] - bodd[i])/2;

	cout<<val<<'\n';
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
