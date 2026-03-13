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

		std::vector<int> nums(n);
		for(int i{};i<n;++i) std::cin>>nums[i];

		bool odd{true},even{true};

		for(int i{2};i<n;i+=2)
			if(nums[0]%2 != nums[i]%2)
				odd = false;

		for(int i{3};i<n;i+=2)
			if(nums[1]%2 != nums[i]%2)
				even = false;

		if(odd && even) std::cout<<"YES\n";
		else std::cout<<"NO\n";
	}

	return 0;
}

