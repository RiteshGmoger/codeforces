#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	int n{},m{}; std::cin>>n>>m;

	long long ans{4LL * m};
	for(int i{};i<n;++i)
	{
		int x{},y{};
		std::cin>>x>>y;

		if(i) ans += 2LL * (x+y);
	}

	std::cout<<ans<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}
