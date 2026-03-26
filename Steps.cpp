#include<bits/stdc++.h>
using ll = long long;

int main()
{
	ll n{},m{};
	std::cin>>n>>m;

	ll x{},y{};
	std::cin>>x>>y;

	ll total{};

	int k{}; std::cin>>k;

	while(k--)
	{
		ll dx{},dy{};
		std::cin>>dx>>dy;

		ll tx = LLONG_MAX,ty = LLONG_MAX;

		if(dx > 0) tx = (n - x) / dx;
		else if(dx < 0) tx = (x - 1) / (-dx);

		if(dy > 0) ty = (m - y) / dy;
		else if(dy < 0) ty = (y - 1) / (-dy); 

		total += std::min(tx,ty);

		x += std::min(tx,ty) * dx;
		y += std::min(tx,ty) * dy;
	}

	std::cout<<total<<'\n';

	return 0;
}
