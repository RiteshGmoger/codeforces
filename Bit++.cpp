#include<iostream>
#include<string>

int main()
{
	int n{},x{};
	std::cin>>n;

	for(int i{1};i<=n;++i)
	{
		std::string str{};
		std::cin>>str;

		if(str == "X++" || str == "++X") x++;
		else x--;
	}
	std::cout<<x<<'\n';

	return 0;
}
