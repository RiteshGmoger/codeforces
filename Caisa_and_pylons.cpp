#include<bits/stdc++.h>

int main()
{
	int n{};
	std::cin>>n;

	long long prev{},minval{},energy{};

	for(int i{};i<n;++i)
	{
		long long temp{};
		std::cin>>temp;

		energy += prev - temp;
		minval = std::min(minval,energy);

		prev = temp;
	}

	std::cout<<-minval<<'\n';

	return 0;
}
