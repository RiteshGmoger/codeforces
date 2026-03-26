#include<bits/stdc++.h>

int main()
{
	int n{},m{};
	std::cin>>n>>m;

	std::vector<int> a(n+1,0);

	int complete{};
	for(int i{};i<m;++i)
	{
		int x{};
		std::cin>>x;

		a[x]++;
		if(a[x] == 1) complete++;

		if(complete == n)
		{
			std::cout<<1;

			for(int j{1};j<=n;++j)
			{
				a[j]--;
				if(a[j] == 0) complete--;
			}
		}
		else std::cout<<0;
	}
	std::cout<<'\n';

	return 0;
}
