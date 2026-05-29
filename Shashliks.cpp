#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	long long k{},a{},b{},x{},y{};
	std::cin>>k>>a>>b>>x>>y;

	if(x > y)
	{
		std::swap(x,y);
		std::swap(a,b);
	}

	long long ans{};

	if(k >= a)
	{
		long long cnt = (k - a) / x + 1;
		ans += cnt;
		k -= cnt * x;
	}
	if(k >= b)
	{
		long long cnt = (k - b) / y + 1;
		ans += cnt;
	}

	std::cout<<ans<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}
