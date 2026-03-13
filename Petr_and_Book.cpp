#include<bits/stdc++.h>

int main()
{
	int n{};
	std::cin>>n;
	
	std::vector<int> days(7,0);
	int sum{},i{};

	for(i=0;i<7;++i)
	{
		std::cin>>days[i];
		sum+=days[i];
		if(sum>=n) 
		{
			std::cout<<i+1<<'\n';
			return 0;
		}
	}
	i=0;

	while(1)
	{
		sum+=days[i];
		if(sum>=n) break;
		i=(i+1)%7;
	}

	std::cout<<i+1<<'\n';

	return 0;
}
