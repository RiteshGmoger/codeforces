#include<bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin>>t;

	while(t--)
	{
		int n{},m{};
		std::cin>>n>>m;

		std::vector<std::string> v(n);

		for(int i{};i<n;++i) std::cin>>v[i];

		int ans{INT_MAX};

		for(int i{};i<n;++i)
		{
			for(int j{i+1};j<n;++j)
			{
				int diff{};

				for(int k{};k<m;++k)
					diff += std::abs(v[i][k] - v[j][k]);

				ans = std::min(ans,diff);
			}
		}

		std::cout<<ans<<'\n';
	}

	return 0;
}
