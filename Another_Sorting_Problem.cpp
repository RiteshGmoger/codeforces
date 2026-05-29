#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using ll = long long;

void work()
{
	ll n{}; std::cin>>n;
	std::vector<ll> a(n);
	for(auto& it : a) std::cin>>it;

	ll prev{a[0]},need{};
	for(int i{1};i<n;++i)
	{
		if(a[i] >= prev) prev = a[i];
		else need = std::max(need, prev-a[i]);
	}

	ll val{-1};
	for(int i{};i<n;++i)
	{
		if(a[i] >= val) val = a[i];
		else if(a[i] + need >= val) val = a[i] + need;
		else
		{
			std::cout<<"No\n";
			return;
		}
	}

	std::cout<<"Yes\n";
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}
