#pragma GCC optimize("O3")
#include<bits/stdc++.h>

int solve(const auto& a,const auto& b)
{
	int n = a.size();
	int cnt{};
	for(int i{};i<n;++i)
	{
		bool ok{};
		for(int j{};j<n;++j)
		{
			if(a[j] >= b[(i+j)%n])
			{
				ok = true;
				break;
			}
		}

		if(!ok) cnt++;
	}

	return cnt;
}

void work()
{
	int n{}; std::cin>>n;
	std::vector<int> a(n),b(n),c(n);
	for(auto& it : a) std::cin>>it;
	for(auto& it : b) std::cin>>it;
	for(auto& it : c) std::cin>>it;

	std::cout<<1LL*n*solve(a,b)*solve(b,c)<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;

	while(t--) work();

	return 0;
}
