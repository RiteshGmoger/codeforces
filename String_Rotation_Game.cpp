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
		std::string str{};
		std::cin>>str;

		int max_count{};
		
		for(int i{};i<n;++i)
		{
			int count{1};
			for(int j{1};j<n;++j)
				if(str[(j+i)%n] != str[(j-1+i)%n]) count++;
			
			max_count = std::max(max_count,count);
		}

		std::cout<<max_count<<'\n';
	}

	return 0;
}
