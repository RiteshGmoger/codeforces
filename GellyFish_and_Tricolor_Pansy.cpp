#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	long long a{},b{},c{},d{};
	std::cin>>a>>b>>c>>d;

	if(std::min(b,d) <= std::min(a,c)) std::cout<<"Gellyfish\n";
	else std::cout<<"Flower\n";
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}
