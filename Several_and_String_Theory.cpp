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

	if(k == 0)
	{
		string r = s;
		reverse(all(r));
		cout<<(s < r?"Yes":"No")<<'\n';
	}
	else
	{
		bool same{true};
		for(int i{1};i<n;++i)
		{
			if(s[i] != s[0])
			{
				same = false;
				break;
			}
		}
		cout<<(!same ? "Yes\n":"No\n");
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
