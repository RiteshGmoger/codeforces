#include<bits/stdc++.h>

int main()
{
	int n{},temp{};
	double sum{};
	std::cin>>n;

	for(int i{};i<n;++i)
	{
		std::cin>>temp;
		sum+=temp;
	}

	std::cout<<std::fixed<<std::setprecision(12)<<sum/n<<'\n';
	return 0;
}
