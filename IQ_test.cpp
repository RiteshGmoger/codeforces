#include<bits/stdc++.h>

int main()
{
	int n{};
	std::cin>>n;
	std::vector<int> vec(n);;

	for(int i{};i<n;++i)
		std::cin>>vec[i];

	int even{},odd{};

	for(int i{};i<3;++i)
	{
		if(vec[i]%2==0) even++;
		else odd++;
	}

	bool majorityeven = (even>odd);

	for(int i{};i<n;++i)
	{
		if((vec[i]%2==0) != majorityeven)
		{
			std::cout<<i+1<<'\n';
			break;
		}
	}

	return 0;
}
