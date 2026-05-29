#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using ll = long long;

void work()
{
	ll a{},b{},k{};
	std::cin>>a>>b>>k;

	ll ans = std::gcd(a,b);

	if(a/ans <= k && b/ans <= k) std::cout<<1<<'\n';
	else std::cout<<2<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}
