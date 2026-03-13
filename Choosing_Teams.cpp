#include<bits/stdc++.h>

int main()
{
	int n{},k{},count{};
	std::cin>>n>>k;

	for(int i{};i<n;++i)
	{
		int temp{};
		std::cin>>temp;
		if(temp < n-k) count++;
	}

	std::cout<<count/3<<'\n';
	return 0;
}
