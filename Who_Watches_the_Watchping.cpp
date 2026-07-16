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
	string s{}; cin>>s;
	vi v(n+1);

	for(int i{n-1};i>=0;--i) v[i] = v[i+1] + (s[i] == 'L'? 1 : 0);

	int l{},r{n-1},ans{};
	while(l < r)
	{
		if(s[l] == 'R')
		{
			int tmp = v[l];
			if(tmp >= k) { l++; continue;}

			tmp -= k;
			while(tmp--)
			{
				while(r > 0 && s[r] == 'L') r--;
				s[r] = 'L';
				ans++;
			}

			if(r <= l)
			{
				cout<<-1<<'\n';
				return;
			}
		}
		l++;
	}

	cout<<ans<<'\n';
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
