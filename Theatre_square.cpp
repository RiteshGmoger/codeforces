#include<bits/stdc++.h>

int main()
{
	int n{},m{},a{};
	std::cin>>n>>m>>a;
	
	long long length = (n+a-1)/a;
	long long width = (m+a-1)/a;

	std::cout<< length*width <<'\n';

	return 0;
}
