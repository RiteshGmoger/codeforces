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

		if(k%2 == 1)
		{
			for(int i{1};i<=n;++i)
			{
				if(i == n) std::cout<<n-1<<' ';
				else std::cout<<n<<' ';
			}
		}
		else
		{
			for(int i{1};i<=n;++i)
			{
				if(i == n-1) std::cout<<n<<' ';
				else std::cout<<n-1<<' ';
			}
		}

		std::cout<<'\n';
	}

	return 0;
}
