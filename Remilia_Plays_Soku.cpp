#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using ll = long long;

void work()
{
	ll n{},x1{},x2{},k{};
	std::cin>>n>>x1>>x2>>k;

	ll mn = std::llabs(x1-x2);
	mn = std::min(n - mn,mn);

	if(n <= 3)
		std::cout<<mn<<'\n';
	else std::cout<<mn + k<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}
