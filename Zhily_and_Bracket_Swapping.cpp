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
	string tmp1{},tmp2{};

	int o{};
	for(int i{};i<n;++i)
	{
		if(a[i] == b[i]) tmp1 += a[i],tmp2 += a[i];
		else
		{
			if(o) tmp1 += '(',tmp2 += ')';
			else tmp1 += ')', tmp2 += '(';

			o ^= 1;
		}
	}

	bool ok{true};
	int left{},right{};
	for(int i{};i<n;++i)
	{
		if(tmp1[i] == '(') left++; else left--;
		if(tmp2[i] == '(') right++; else right--;

		if(left < 0 || right < 0) ok = false;
	}
	if(left !=  0 || right != 0) ok = false;

	if(ok) cout<<"Yes\n";
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
