#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using ll = long long;

void work()
{
	ll a{},b{},c{};
	std::cin>>a>>b>>c;

	ll tmp = a/3;
	ll ans = tmp * std::min(3LL*b,c);
	tmp = a%3;

	std::cout<<(ans + std::min(tmp * b,c))<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}
