#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	int n{}; std::cin>>n;
	std::vector<int> a(n);
	for(auto& it : a) std::cin>>it;

	long long ans{};
	for(int i{};i<n;++i)
	{
		for(int j{};j<i;++j)
		{
			int x = std::max(a[n-1],2*a[i]) - a[i] - a[j];
			int k = std::upper_bound(a.begin(),a.begin()+j,x) - a.begin();
			ans += j - k;
		}
	}

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
