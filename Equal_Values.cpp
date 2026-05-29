#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	int n{}; std::cin>>n;
	std::vector<int> a(n);
	for(auto& it : a) std::cin>>it;

	std::vector<std::pair<int,int>> p{};
	p.push_back({0,0});
	for(int i{};i<n-1;++i)
	{
		if(a[i] == a[i+1]) continue;

		p.back().second = i;
		p.push_back({i+1,i+1});
	}
	p.back().second = n-1;

	int sz = p.size();
	std::vector<long long> v{};
	for(int i{};i<sz;++i)
	{
		int l = p[i].first;
		int r = p[i].second;

		int len = r-l+1;
		long long cost = 1LL * (n-len) * a[l];

		v.push_back(cost);
	}

	std::cout<<*std::min_element(v.begin(),v.end())<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}
