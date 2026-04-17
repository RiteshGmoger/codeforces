#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	int n{}; std::cin>>n;

	int ans{};
	for(int i{};i<=n;++i)
	{
		std::vector<int> temp;

		for(int j{1};j<=i;++j) temp.push_back(j);
		for(int j{n};j>i;--j) temp.push_back(j);

		int sum{},mx{};
		for(int k{};k<n;++k)
		{
			sum += temp[k] * (k+1);
			mx = std::max(mx,temp[k] * (k+1));
		}

		ans = std::max(ans,sum - mx);
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
