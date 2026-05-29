#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using ll = long long;

void work()
{
	ll a{},b{},c{};
	 std::cin>>a>>b>>c;

	 ll val = b - a;
	 c -= val;

	 if(c < b || (c - b)%3 != 0) std::cout<<"No\n";
	 else std::cout<<"Yes\n";
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}
