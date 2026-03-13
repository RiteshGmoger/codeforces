#include<bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin>>t;

	while(t--)
	{
		int k{},n{};
		std::cin>>k>>n;

		std::vector<int> a{};
		int curr{1},diff{1};

		a.push_back(curr);

		for(int i{1};i<k;++i)
		{
			if(curr + diff + (k - i -1) <= n)
			{
				curr += diff;
				diff++;
			}
			else curr += 1;

			a.push_back(curr);
		}

		for(int i : a) std::cout<<i<<' ';
		std::cout<<'\n';
	}

	return 0;
}
