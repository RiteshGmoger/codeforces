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
	string s{}; cin>>s;

	int ans{1};
	for(int i{1};i<n;++i)
		if(s[i] != s[i-1]) ans++;

	int best = ans;

	for(int i{1}; i < n-1; i++)
	{
    		if(s[i] != s[i-1] && s[i] != s[i+1])
		{
        		if(s[i-1] == s[i+1]) best = min(best, groups - 2);
        		else best = min(best, groups - 1);
    		}
	}

	cout<<best<<'\n';
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
