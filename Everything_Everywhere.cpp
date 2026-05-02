#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	int n{}; std::cin>>n;
	std::vector<int> p(n);
	for(auto& it : p) std::cin>>it;

	int ans{};
	for(int i{};i<n-1;++i)
		if(std::__gcd(p[i],p[i+1]) == std::abs(p[i]-p[i+1])) ans++;

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
