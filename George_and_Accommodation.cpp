#include<iostream>

int main()
{
	int n{},best{};
	std::cin>>n;

	while(n--)
	{
		int p{},q{};
		std::cin>>p>>q;

		if(p < q-1) best++;
	}

	std::cout<<best<<'\n';
	return 0;
}
