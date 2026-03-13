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
		std::string s{};
		std::cin>>s;

		std::vector<int> one{},zero{};

		for(int i{};i<n;++i)
		{
			if(s[i] == '1') one.push_back(i+1);
			else zero.push_back(i+1);
		}

		if(one.size()%2 == 0)
		{
			std::cout<<one.size()<<'\n';
			for(int c : one) std::cout<<c<<' ';
			std::cout<<'\n';
		}
		else if(zero.size()%2 == 1)
		{
			std::cout<<zero.size()<<'\n';
			for(int c : zero) std::cout<<c<<' ';
			std::cout<<'\n';
		}
		else std::cout<<-1<<'\n';
	}

	return 0;
}
