#include<bits/stdc++.h>

int main()
{
	int n{};
	std::cin>>n;

	std::vector<int> vec(n);
	int count{1},ans{1};

	for(int i{};i<n;++i)
		std::cin>>vec[i];

	for(int i{1};i<n;++i)
	{
		if(vec[i] >= vec[i-1])
		{
			count++;
			ans = std::max(ans,count);
		}
		else count = 1;
	}

	std::cout<<ans<<'\n';
	
	return 0;
}
