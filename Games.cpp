#include<bits/stdc++.h>

int main()
{
	int ans{},n{};
	std::cin>>n;

	std::vector<int> home{};
	std::vector<int> guest{};

	for(int i{};i<n;++i)
	{
		int temp1{},temp2{};
		std::cin>>temp1>>temp2;
		home.push_back(temp1);
		guest.push_back(temp2);
	}
	
	for(int i{};i<n;++i)
	{
		for(int j{};j<n;++j)
		{
			if(home[i]==guest[j] && i!=j) ans++;
		}
	}

	std::cout<<ans<<'\n';

	return 0;
}
