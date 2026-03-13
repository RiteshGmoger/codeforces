#include<bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin>>t;

	while(t--)
	{
		int n{},k{};
		std::cin>>n>>k;

		long long ans = k + (k-1) / (n-1);

		std::cout<<ans<<'\n';
	}

	return 0;
}
