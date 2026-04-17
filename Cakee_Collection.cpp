#include<bits/stdc++.h>

void work()
{
	int n{},m{};
	std::cin>>n>>m;

	std::vector<int> a(n);
	for(auto& it : a) std::cin>>it;

	std::sort(a.rbegin(),a.rend());

	long long ans{};
	int k = std::min<long long>(n,m);
	for(int i{};i<k;++i)
		ans += 1LL * a[i] * (m - i);

	std::cout<<ans<<'\n';
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
