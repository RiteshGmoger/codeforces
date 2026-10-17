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
	vll a(n); for(auto& it : a) cin>>it;
	sort(all(a));
	ll ans{1},tmp{1},dist{1};
	int i{1},j{};

	while(i < n)
	{
		if(a[i] == a[i-1]) tmp++;
		else if(a[i] == a[i-1]+1)
		{
			if(dist == k)
			{
				ll val = a[j];
				while(j <= i && val == a[j])
				{
					tmp--;
					j++;
				}
			}
			else dist++;

			tmp++;
		}
		else
		{
			dist = 1;
			tmp = 1;
			j = i;
		}

		i++;
		ans = max(ans,tmp);
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
