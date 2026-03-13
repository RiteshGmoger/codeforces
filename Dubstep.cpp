#include<bits/stdc++.h>

int main()
{
	std::string str{},newstr{};
	std::cin>>str;
	int n = str.size();

	for(int i{};i<n;++i)
	{
		if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B')
		{
			i+=2;
			newstr.push_back(' ');
		}
		else newstr.push_back(str[i]);
	}
	
	std::cout<<newstr<<'\n';

	return 0;
}
