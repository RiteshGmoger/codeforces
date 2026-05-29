#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using ll =  long long;

void work()
{
	ll a{},b{},x{},y{};
	std::cin>>a>>b>>x>>y;

	if((a > b && a%2 == 0) || (a > b && a%2 == 1 && a-1 != b))
	{
		std::cout<<-1<<'\n';
		return;
	}
	if(a%2 == 1 && a-1 == b)
	{
		std::cout<<y<<'\n';
		return;
	}
	if(x <= y)
	{
		std::cout<<1LL * (b-a) * x<<'\n';
		return;
	}

	ll ans{};
	
	while(a != b)
	{
		if(a%2 == 0) ans += y;
		else ans += x;

		a++;
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
