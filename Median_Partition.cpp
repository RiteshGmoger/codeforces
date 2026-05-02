#pragma GCC optimize("O3")
#include<bits/stdc++.h>

int solve(int i,std::vector<long long> a)
{
	std::sort(a.begin(),a.begin()+i+1);
	long long val = a[i+1/2];
	long long ans{};

	for(int j{i+1};j<n;j+=2)
	{
		for(int k{j};k<n;k+=2)
		{
			m
		}
	}
}

void work()
{
	int n{}; std::cin>>n;
	std::vector<long long> a(n);
	for(auto& it : a) std::cin>>it;

	int ans{};
	for(int i{};i<n;i+=2)
		ans = std::max(ans,solve(i,a));

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
