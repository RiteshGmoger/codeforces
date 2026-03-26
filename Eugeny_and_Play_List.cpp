#include<bits/stdc++.h>

int main()
{
	int n{},m{};
	std::cin>>n>>m;

	std::vector<std::pair<long long,long long>> p(n);
	std::vector<long long> v(m);
	for(int i{};i<n;++i)
	{
		std::cin>>p[i].first;
		std::cin>>p[i].second;
	}
	for(int i{};i<m;++i) std::cin>>v[i];

	long long prod{};
	int j{};
	for(int i{};i<n;i++)
	{
		prod += p[i].first * p[i].second;
		bool ok{true};

		while(prod >= v[j])
		{
			std::cout<<i+1<<'\n';
			j++;
			if(j >= m)
			{
				ok = false;
				break;
			}
		}
		if(!ok) break;
	}

	return 0;
}
