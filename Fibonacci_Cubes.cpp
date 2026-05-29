#pragma GCC optimize("O3")
#include<bits/stdc++.h>

std::vector<int> fib(12);

void work()
{
	int n{},m{};
	std::cin>>n>>m;

	for(int i{};i<m;++i)
	{
		int w{},l{},h{};
		std::cin>>w>>l>>h;

		std::vector<int> v = {w,l,h};
		std::sort(v.begin(),v.end());

		if(v[0] >= fib[n] && v[1] >= fib[n] && v[2] >= fib[n+1]) std::cout<<1;
		else std::cout<<0;
	}
	std::cout<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	fib[1] = 1;
	fib[2] = 2;
	for(int i{3};i<=11;++i) fib[i] = fib[i-1] + fib[i-2];

	while(t--) work();

	return 0;
}
