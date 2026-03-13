#include<bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin>>t;

	while(t--)
	{
		int n{},m{},k{};
		std::cin>>n>>m>>k;

		int x{std::min(m,n/k)};
		int remaining{m - x};
		int y{};

		if(k > 1) y = (remaining + k-2)/(k-1);

		std::cout<<x-y<<'\n';
	}

	return 0;
}
