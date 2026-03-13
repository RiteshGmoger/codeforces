#include<iostream>

int main()
{
	int a{},b{},count{};

	std::cin>>a>>b;

	while(a<=b)
	{
		a*=3;
		b*=2;
		count++;
	}

	std::cout<<count<<'\n';
	return 0;
}
