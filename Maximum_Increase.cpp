#include<bits/stdc++.h>

int main()
{
	unsigned int n{};
	std::cin>>n;

	std::vector<unsigned int> v(n,0);

	for(int i{};i<n;++i)
		std::cin>>v[i];

	int count{1},ans{1};
	
	for(int i{};i<n-1;++i)
	{
		if(v[i] >= v[i+1])
			count = 1;
		else count++;

		ans = std::max(ans,count);
	}

	std::cout<<ans<<'\n';

	return 0;
}
