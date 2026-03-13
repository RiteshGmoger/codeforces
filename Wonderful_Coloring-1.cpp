#include<bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin>>t;

	while(t--)
	{
		std::string s{};
		std::cin>>s;

		std::vector<int> v(26,0);

		for(char c : s)
			v[c - 'a']++;

		int distinct{},extra{};

		for(int i{};i<26;++i)
		{
			if(v[i] >= 1) distinct++;
			if(v[i] >= 2) extra++;
		}

		std::cout<<(distinct+extra)/2<<'\n';
	}

	return 0;
}
