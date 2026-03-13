#include<bits/stdc++.h>

long long dp[100001];

long long memo(int i,std::vector<long long>& nums)
{
	if(i <= 0) return 0;

	if(dp[i] != -1) return dp[i];

	long long take = nums[i]*i + memo(i-2,nums);
	long long skip = memo(i-1,nums);

	return dp[i] = std::max(take,skip);
}

int main()
{
	int n{};
	std::cin>>n;

	std::vector<long long> v(100001,0);

	int max_value{},x{};

	for(int i{};i<n;++i)
	{
		std::cin>>x;
		v[x]++;
		max_value = std::max(max_value,x);
	}

	std::memset(dp,-1,sizeof(dp));

	std::cout<<memo(max_value,v)<<'\n';

	return 0;
}
