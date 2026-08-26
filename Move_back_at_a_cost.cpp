#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
using ll  = long long;
using ull = unsigned long long;
using ld  = long double;
using i128 = __int128;
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
	int n; cin>>n;

	vll val(n);
	for(auto &x : val) cin>>x;

	vll ans{};
	multiset<ll> st;

	for(int i{}; i<n; ++i)
	{
		while(!ans.empty() && ans.back() > val[i])
		{
			st.insert(ans.back()+1);
			ans.pop_back();
		}

		ans.pb(val[i]);
	}

	while(!st.empty() && !ans.empty() && ans.back() > *st.begin())
	{
		st.insert(ans.back()+1);
		ans.pop_back();
	}

	for(ll x : ans)
		cout << x << ' ';

	for(ll x : st)
		cout << x << ' ';

	cout << '\n';	
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t{1};
	cin >> t;

	while(t--)
		solve();

	return 0;
}
