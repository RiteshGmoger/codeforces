#include<bits/stdc++.h>

void work()
{
	int n{};
	std::cin>>n;

	std::cout<<2*n-1<<'\n';

	for(int i{1};i<=n;++i)
	{
		std::cout<<i<<' '<<1<<' '<<i<<'\n';
		if(i < n)
			std::cout<<i<<' '<<i+1<<' '<<n<<'\n';
	}
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
