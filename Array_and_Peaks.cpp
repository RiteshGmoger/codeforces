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

		if((n-1)/2 < k)
		{
			std::cout<<-1<<'\n';
			continue;
		}

		std::vector<int> ans(n,0);

		for(int i{};i<n;++i)
			ans[i] += i+1;

		for(int i{1};i<=k;++i)
			std::swap(ans[2*i-1],ans[2*i]);

		for(int c : ans)
			std::cout<<c<<' ';

		std::cout<<'\n';
	}

	return 0;
}
