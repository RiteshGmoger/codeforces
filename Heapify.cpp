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
	vi a(n+1); for(int i{1};i<=n;++i) cin>>a[i];

	for(int i=1;i<=n;i+=2)
      		for(int j=i;j<=n;j*=2)
        		for(int k=i*2;k<=n;k*=2)
          			if(a[k/2]>a[k])swap(a[k/2],a[k]);

    	if(is_sorted(begin(a),end(a)))cout<<"YES\n";
    	else cout<<"NO\n";
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
