#include<bits/stdc++.h>

void work()
{
	long long a1{},a2{},a3{},a4{};
	std::cin>>a1>>a2>>a3>>a4;

	if(a1 == 0) std::cout<<1<<'\n';
	else std::cout<<(a1 + 2LL * std::min(a2,a3) + std::min(a1+1, llabs(a2-a3) + a4))<<'\n';
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
