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
	ll n{},l{},r{}; cin>>n>>l>>r;
	vll a(n); for(auto& it : a) cin>>it;

	vll tmp1 = a,tmp2 = a;
	ll sum1{},sum2{};

	sort(tmp1.begin(),tmp1.begin()+r);
	sort(tmp2.begin()+l-1,tmp2.end());

	for(int i{};i<r-l+1;++i) sum1 += tmp1[i];
	for(int i{};i<r-l+1;++i) sum2 += tmp2[l-1+i];

	cout<<min(sum1,sum2)<<'\n';
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
