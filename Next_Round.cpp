#include<bits/stdc++.h>

int main()
{
	int n{},k{},count{};
	std::cin>>n>>k;
	std::vector<int> vec(n);

	for(int i{};i<n;++i)
		std::cin>>vec[i];

	for(int i{};i<n;++i)
		if(vec[i] >= vec[k-1] && vec[i] > 0) count++;

	std::cout<<count<<'\n';

	return 0;
}
