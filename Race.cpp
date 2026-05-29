#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	int a{},x{},y{};
	std::cin>>a>>x>>y;

	if((a > x && a > y) || (a < x && a < y))
		std::cout<<"Yes\n";
	else std::cout<<"No\n";
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}
