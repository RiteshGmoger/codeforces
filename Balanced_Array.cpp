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

		if(n%4 != 0)
		{
			std::cout<<"NO\n";
			continue;
		}

		std::cout<<"YES\n";

		long long even_sum{};
		long long odd_sum{};

		for(int i{1};i<=n/2;++i)
		{
			std::cout<<2*i<<' ';
			even_sum+=2*i;
		}
		for(int j{};j<n/2-1;++j)
		{
			std::cout<<2*j+1<<' ';
			odd_sum+=2*j+1;
		}
		std::cout<< even_sum - odd_sum << '\n';
	}

	return 0;
}
