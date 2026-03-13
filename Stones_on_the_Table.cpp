#include<iostream>
#include<string>

int main()
{
	int n{},count{};
	std::cin>>n;
	
	std::string stone{};
	std::cin>>stone;

	for(int i{1};i<n;++i)
	{
		if(stone[i]==stone[i-1])
			count++;
	}

	std::cout<<count<<'\n';
	return 0;
}
