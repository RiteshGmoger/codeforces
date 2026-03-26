#include<bits/stdc++.h>

int main()
{
	int n{},m{};
	std::cin>>n>>m;

	int mx{};
	bool ok{};
	for(int i{};i<n;++i)
	{
		int cur{},tmp{};
		std::cin>>cur>>tmp;

		if(cur > mx) ok = true;

		mx = std::max(mx,tmp);
	}

	if(ok || mx < m) std::cout<<"NO\n";
	else std::cout<<"YES\n";

	return 0;
}
