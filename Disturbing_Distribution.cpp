#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	int n{}; std::cin>>n;
	std::vector<int> a(n);
	for(auto& it : a) std::cin>>it;
	int ans{};

	for(int i{};i<n-1;++i)
		if(a[i] == 1) a[i] = 0;

	for(int i{};i<n;++i)
		ans += a[i];

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
