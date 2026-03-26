#include<bits/stdc++.h>

void work()
{
	std::string x{},y{};
	std::cin>>x>>y;

	int n = x.size();
	bool one{};
	for(int i{};i<n;++i)
	{
		if((x[i] > y[i]) == one) std::swap(x[i],y[i]);
		one |= (x[i] != y[i]);
	}

	std::cout<<x<<'\n'<<y<<'\n';
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
