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
	int a{},b{},c{}; cin>>a>>b>>c;

	int max1{},max2{},max3{};
	if(a >= b && a >= c)
	{
		max1 = a;
		max2 = max(b,c);
		max3 = min(b,c);
	}
	else if(b >= a && b >= c)
	{
		max1 = b;
		max2 = max(a,c);
		max3 = min(a,c);
	}
	else
	{
		max1 = c;
		max2 = max(a,b);
		max3 = min(a,b);
	}

	int val = min(max1,max2+max3);

	cout<<val - min(max2,max3)<<'\n';
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
