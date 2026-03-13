#include<iostream>

int main()
{
	int k{},r{},ans{};
	std::cin>>k>>r;

	for(int i{1};i<=10;++i)
	{
		ans=(i*k)%10;
		if(ans==r || ans==0)
		{
			std::cout<<i<<'\n';
			break;
		}
	}
	return 0;
}
