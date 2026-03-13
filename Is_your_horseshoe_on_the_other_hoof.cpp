#include<bits/stdc++.h>

int main()
{
	int count{};
	std::vector<int> vec{};

	for(int i{};i<4;++i)
	{
		int temp{};
		std::cin>>temp;
		vec.push_back(temp);
	}
	std::sort(vec.begin(),vec.end());
	
	for(int i{1};i<4;++i)
	{
		if(vec[i]==vec[i-1]) count++;
	}

	std::cout<<count<<'\n';

	return 0;
}
