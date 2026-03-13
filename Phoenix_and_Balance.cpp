#include<bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin>>t;

	while(t--)
	{
		int n{};
		std::cin>>n;

		long long a{},b{};

		a += (1LL << n);

		for(int i{1};i<n/2;++i)
			a += (1LL << i);

		for(int i{n/2};i<n;++i)
			b += (1LL << i);

		std::cout<<std::abs(a-b)<<'\n';
	}

	return 0;
}
