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

    vi a(2 * n);
    for (auto &it : a) cin>>it;

    vector<int> mp(n + 1, -1);
    vll dp(2*n+1,0);

    for(int i{}; i < 2 * n; ++i)
    {
        dp[i + 1] = dp[i] + 1;

        if(mp[a[i]] == -1)
        {
            mp[a[i]] = i;
        }
        else
        {
            int l = mp[a[i]];
            ll len = i - l + 1;
            dp[i + 1] = max(dp[i + 1], dp[l] + len * len);
        }
    }

    cout<<dp[2 * n]<<'\n';
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
