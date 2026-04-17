#include<bits/stdc++.h>

void work()
{
	long long w{},b{};
	std::cin>>w>>b;

	long long mx{},side{};
	while(mx + (side+1) <= w+b)
	{
		side++;
		mx += side;
	}

	std::cout<<side<<'\n';
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
