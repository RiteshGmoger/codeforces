#include<bits/stdc++.h>

void work()
{
	int a{},b{};
	std::cin>>a>>b;

	if(a == b) std::cout<<0<<'\n';
	else if(a % b == 0 || b % a == 0) std::cout<<1<<'\n';
	else std::cout<<2<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin>>t;

	while(t--) work();

	return 0;
}
