#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using ll = long long;

void work()
{
	ll n{},k{};
	std::cin>>n>>k;

	std::vector<ll> a(n);
	for(auto& it : a) std::cin>>it;

	for(int i{};i<n;++i)
	{
		ll tmp = a[i]%(k+1) * 1LL * k;
		a[i] += tmp;
	}

	for(auto& it : a) std::cout<<it<<' ';
	std::cout<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}
