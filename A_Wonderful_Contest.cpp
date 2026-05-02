#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	int n{};
	std::cin>>n;

	std::vector<long long> a(n);
	for(auto& it : a) std::cin>>it;

	for(int i{};i<n;++i)
		if(a[i] == 100)
		{
			std::cout<<"Yes\n";
			return;
		}

	std::cout<<"No\n";
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
