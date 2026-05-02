#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using ll = long long;

void work()
{
	ll n{},a{},b{};
	std::cin>>n>>a>>b;

	if(b >= a)
	{
		if((n%2 == 0 && b%2 == 0) || (n%2 == 1 && b%2 == 1))
			std::cout<<"Yes\n";
		else std::cout<<"No\n";

		return;
	}
	if((n%2 == 0 && a%2 == 0 && b%2 == 0) || (n%2 == 1 && a%2 == 1 && b%2 == 1))
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
