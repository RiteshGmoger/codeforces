#include<bits/stdc++.h>

int main()
{
	int n{}; std::cin>>n;

	std::vector<int> a(n);
	int mx{},i{};
	for(auto& it : a)
	{
		std::cin>>it;
		mx += it;
	}

	int sum{};
	for(;i<n;++i)
	{
		sum += a[i];

		if(sum >= mx/2) break;
	}

	std::cout<<i+1<<'\n';

	return 0;
}
