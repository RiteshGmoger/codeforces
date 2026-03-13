#include<bits/stdc++.h>

int main()
{
	int n{};
	std::cin>>n;
	int ans{1};
	std::vector<int> math(n,0);

	for(int i{};i<n;++i)
		std::cin>>math[i];

	for(int i{1};i<n;++i)
	{
		if(math[i] != math[i-1])
			ans++;
	}
	
	std::cout<<ans<<'\n';

	return 0;
}
