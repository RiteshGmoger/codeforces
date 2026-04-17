#include<bits/stdc++.h>

void work()
{
	int n{};
	std::cin>>n;
	
	std::vector<int> nums(n);
	for(int i{};i<n;++i)
		std::cin>>nums[i];

	std::sort(nums.begin(), nums.end(), std::greater<>());

	for(int i{1};i<n;++i)
	{
		if(nums[i] == nums[i-1])
		{
			std::cout<<-1<<'\n';
			return;
		}
	}

	for(int i{};i<n;++i)
		std::cout<<nums[i]<<' ';

	std::cout<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin>>t;

	while(t--) work();

	return 0;
}
