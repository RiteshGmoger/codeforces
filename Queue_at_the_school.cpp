#include<bits/stdc++.h>

int main()
{
	int n{},t{};
	std::cin>>n>>t;
	std::string str{};
	std::cin>>str;

	if(str.size() <= 1)
	{
		std::cout<<str<<'\n';
		return 0;
	}
	
	while(t--)
	{
		for(int i{};i<str.size()-1;++i)
		{
			if(str[i] == 'B' && str[i+1] == 'G')
			{
				str[i] = 'G';
				str[i+1] = 'B';
				i++;
			}
		}
	}

	std::cout<<str<<'\n';

	return 0;
}
