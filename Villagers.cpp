#include<bits/stdc++.h>

void work()
{
	int n{};
	std::cin>>n;

	long long ans{};
	std::vector<long long> a(n);

	for(int i{};i<n;++i)
		std::cin>>a[i];

	std::sort(a.begin(),a.end(),std::greater<>());

	for(int i{};i<n;++i)
	{
		if(i%2 == 1)
			ans += std::max(a[i],a[i-1]);
	}

	if(n%2 == 1) ans += a[n-1];

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
