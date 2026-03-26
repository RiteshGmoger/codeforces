#include<bits/stdc++.h>

void work()
{
	int n{},k{};
	std::cin>>n>>k;

	std::pair<int,std::pair<int,int>> p[n];

	for(int i{};i<n;++i)
		std::cin>>p[i].first>>p[i].second.first>>p[i].second.second;

	std::sort(p,p+n);

	for(int i{};i<n;++i)
	{
		if(k < p[i].first) break;
		k = std::max(k,p[i].second.second);
	}

	std::cout<<k<<'\n';
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
