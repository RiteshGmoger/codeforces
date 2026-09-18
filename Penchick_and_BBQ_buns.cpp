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
	
	if(n%2 == 1 && n < 27)
	{
		cout<<"-1\n";
		return;
	}
	int val{1};

	if(n%2 == 0)
	{
		for(int i{};i<n;++i)
		{
			if(i != 0 && i%2 == 0) val++;
			cout<<val<<' ';
		}
		cout<<'\n';
	}
	else
	{
		vi tmp(n);
		tmp[0] = tmp[9] = tmp[25] = 1;
		tmp[10] = tmp[26] = 2;
		val = 3;

		for(int i{};i<n;)
		{
			if(tmp[i] != 0)
			{
				i++;
				continue;
			}

			tmp[i] = tmp[i+1] = val++;
			i += 2;
		}

		for(int x : tmp) cout<<x<<' ';
		cout<<'\n';
	}
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
