#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	long long x{}; std::cin>>x;

	int ans = 64 - __builtin_clzll(x);
	std::cout<<2LL * ans + 1<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}
