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
    int n{};cin>>n;
    vi l(n+1),r(n+1);
    vi sum(2*n+1),cnt(2*n+1);
    for(int i{1};i<=n;++i)
    {
	    cin>>l[i]>>r[i];
	    if(l[i] == r[i]) sum[l[i]] = 1,cnt[r[i]]++;
    }
    for(int i{2};i<=2*n;++i) sum[i] += sum[i-1];

    for(int i{1};i<=n;++i) cout<<((l[i] == r[i] 
		    ? cnt[l[i]] == 1
		    : (sum[r[i]]-sum[l[i]-1]) < (r[i] - l[i] + 1)) ? '1' : '0');
    cout<<'\n';
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
