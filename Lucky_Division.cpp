#include<bits/stdc++.h>

int main()
{
	int n{};
	std::cin>>n;

	std::vector<int> lucky = {4,7,44,77,47,444,777,447,474,744,774,747,477};

	for(int l : lucky)
	{
		if(n%l==0)
		{
			std::cout<<"YES"<<'\n';
			return 0;
		}
	}
	std::cout<<"NO"<<'\n';
	return 0;
}
