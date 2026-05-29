#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	int n{}; std::cin>>n;
	std::vector<short> a(n);
	int cnt{};
	for(auto& it : a)
	{
		std::cin>>it;
		if(it == 1) cnt++;
	}

	for(int i{};i<n-1;++i)
	{
		if(a[i] == 0 && a[i+1] == 0)
		{
			std::cout<<"Yes\n";
			return;
		}
	}

	if(cnt == n) std::cout<<"Yes\n";
	else std::cout<<"No\n";
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}
