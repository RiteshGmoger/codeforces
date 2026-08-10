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

long long call(string& s,int n,int strt)
{
	int ok{-1};

	for(int i{strt};i<n;i+=2)
	{
		if(s[i] == '?') continue;

		int val = s[i]-'0';

		int idx = (i-strt) / 2;
		int need = val ^ (idx & 1);

		if(ok == -1) ok = need;
		else if(ok != need) return 0;
	}

	return (ok == -1 ? 2 : 1);
}

void solve()
{
	int n{}; cin>>n;
	string s{}; cin>>s;

	long long odd = call(s,n,1);
	long long even = call(s,n,0);

	cout<<(1LL*odd*even)%998244353<<'\n';
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
