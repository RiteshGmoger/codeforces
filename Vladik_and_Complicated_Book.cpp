#include<bits/stdc++.h>

int main()
{
	int n{},m{};
	std::cin>>n>>m;

	std::vector<int> p(n);
	std::vector<std::string> s(m);
	for(auto& it : p) std::cin>>it;

	for(int i{};i<m;++i)
	{
		int l{},r{},x{};
		std::cin>>l>>r>>x;

		int cnt{};
		for(int j{l};j<=r;++j)
			if(p[j-1] < p[x-1]) cnt++;

		if(cnt == x - l) std::cout<<"Yes\n";
		else std::cout<<"No\n";
	}

	return 0;
}
