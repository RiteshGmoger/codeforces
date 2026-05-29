#pragma GCC optimize("O3")
#include<bits/stdc++.h>
# define MOD 998244353

void work()
{
	int n{}; std::cin>>n;
	std::vector<int> p(n);
	std::vector<int> q(n);

	for(auto& it : p) std::cin>>it;
	for(auto& it : q) std::cin>>it;

	int mxp{-1},mxq{-1};
	int posp{},posq{};
	std::vector<long long> ans(n);
	ans[0] = 1;
	for(int i{1};i<n;++i) ans[i] = (ans[i-1]*2) % MOD;

	for(int i{};i<n;++i)
	{
		if(p[i] > mxp)
		{
			mxp = p[i];
			posp = i;
		}
		if(q[i] > mxq)
		{
			mxq = q[i];
			posq = i;
		}

		std::pair<int,int> a = {mxp,q[i-posp]};
		std::pair<int,int> b = {p[i - posq],mxq};

		if(a.first < a.second) std::swap(a.first,a.second);
		if(b.first < b.second) std::swap(b.first,b.second);

		std::pair<int,int> best = std::max(a,b);

		std::cout<<(ans[best.first] + ans[best.second]) % MOD<<' ';
	}
	std::cout<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}
