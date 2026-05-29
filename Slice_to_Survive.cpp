#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using ll = long long;

ll f(ll x)
{
	if(x <= 1) return 0;
	
	return 64 - __builtin_clzll(x-1);
}

void work()
{
	ll n{},m{},a{},b{};
	std::cin>>n>>m>>a>>b;

	ll h = std::min(a, n-a+1);
	ll v = std::min(b, m-b+1);

	ll ans1 = 1 + f(h) + f(m);
	ll ans2 = 1 + f(n) + f(v);

	std::cout<<std::min(ans1,ans2)<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}
