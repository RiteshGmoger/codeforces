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
	int n{},k{}; cin>>n>>k;

	if(k < n || k == 2*n)
	{
		cout<<-1<<'\n';
		return;
	}


	int left = 2*n - k;
	vector<vi> ans(n,vector<int>(n));

	int tmp{1},i{},j{};
	while(i < n && j < n)
	{
		if(tmp-1 != left)
		{
			ans[i][j] = tmp;
			tmp++; j++;
			i++;
		}
		else break;
	}
	int val = i;
	while(i < n)
	{
		ans[i][0] = tmp;
		tmp++; i++;
	}
	while(val < n && j < n)
	{
		ans[val][j] = tmp;
		tmp++; j++; val++;
	}
	i = 0;

	while(i < n)
	{
		int j{};
		while(j < n)
		{
			if(ans[i][j] == 0)
			{
				ans[i][j] = tmp;
				tmp++;
			}
			j++;
		}
		i++;
	}

	for(int i{};i<n;++i)
	{
		for(int j{};j<n;++j) cout<<ans[i][j]<<' ';
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
