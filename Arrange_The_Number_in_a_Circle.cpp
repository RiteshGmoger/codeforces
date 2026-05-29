#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using ll = long long;

void work()
{
	int n{}; std::cin>>n;
	std::vector<ll> c(n);
	ll cnt{};
	for(auto& it : c)
	{
		std::cin>>it;
		cnt += it;
	}

	if(c[0] != 1)
	{
		std::cout<<cnt<<'\n';
		return;
	}
	if(cnt == n)
	{
		std::cout<<0<<'\n';
		return;
	}

	cnt = 0;
	ll one{};
	for(auto& it : c)
	{
		if(it == 1) one++;
		else cnt += it / 2;
	}

	std::cout<<(2LL * cnt + std::min(one, cnt+1LL))<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}
