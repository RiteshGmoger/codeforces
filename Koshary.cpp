#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	int x{},y{};
	std::cin>>x>>y;

	if(x%2 == 1 && y%2 == 1) std::cout<<"No\n";
	else std::cout<<"Yes\n";
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}
