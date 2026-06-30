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
	int T{}; cin>>T;
	while(T--)
	{
		int n{},p{},q{}; cin>>n>>p>>q;

		string s = to_string(n);
		vector<string> ans{};

		do
		{
			ans.push_back(s);
		}while(next_permutation(all(s)));

		string first = ans[p-1];
		string second = ans[q-1];

		int cnt1{},cnt2{};
		for(int i{};i<(int)s.size();++i)
		{
			if(first[i] == second[i]) cnt1++;
			else cnt2++;
		}

		cout<<cnt1<<"A"<<cnt2<<"B\n";
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t{1};
	//cin >> t;
	while(t--) solve();

	return 0;
}
