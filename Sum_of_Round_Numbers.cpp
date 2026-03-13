#include<bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin>>t;

	while(t--)
	{
		int n{};
		std::cin>>n;

		int ans{1},count{};
		std::vector<int> v{};

		while(n > 0)
		{
			int rem = n%10;

			if(rem == 0)
			{
				n /= 10;
				ans *=  10;
				continue;
			}

			v.push_back(rem*ans);
			count++;
			ans *= 10;
			n /= 10;
		}

		std::cout<<count<<'\n';
		for(int i : v)
			std::cout<<i<<' ';

		std::cout<<'\n';

	}

	return 0;
}
