#include<bits/stdc++.h>

int main()
{
	int a{},b{};
	std::cin>>a>>b;

	int nc{a};

	while(a>=b)
	{
		nc+=a/b;
		a = a/b + a%b;
	}

	std::cout<<nc<<'\n';

	return 0;
}
