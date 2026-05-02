#include<bits/stdc++.h>

void work()
{
	int n{},r{};
	std::cin>>n>>r;

	std::vector<int> x(n);
	for(auto& it : x) std::cin>>it;

	std::sort(x.begin(),x.end(),std::greater<int>());
	x.erase(std::unique(x.begin(),x.end()),x.end());

	int bomb{};
	for(int i{};i<x.size();++i)
	{
		if(x[i] - r*i <= 0) break;
		bomb++;
	}

	std::cout<<bomb<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int q{};
	std::cin>>q;

	while(q--) work();

	return 0;
}
