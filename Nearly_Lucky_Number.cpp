#include<bits/stdc++.h>

int main()
{
	std::string n{};
	std::cin>>n;
	int s = n.size(),count{};

	for(int i{};i<s;++i)
		if(n[i] == '4' || n[i] == '7') count++;

	std::string temp = std::to_string(count);
	
	for(char i : temp)
	{
		if(i != '4' && i != '7') 
		{
			std::cout<<"NO"<<'\n';
			return 0;
		}
	}

	std::cout<<"YES"<<'\n';

	return 0;
}
