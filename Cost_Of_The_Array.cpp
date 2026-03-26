#include<bits/stdc++.h>

void work()
{
	int n{},k{};
	std::cin>>n>>k;

	std::vector<int> a(n);
	for(int& x : a) std::cin>>x;

	if(k == n)
	{
		for(int i{1};i<n;i+=2)
		{
			if(a[i] != (i+1)/2)
			{
				std::cout<<(i+1)/2<<'\n';
				return;
			}
		}
		std::cout<<k/2+1<<'\n';
	}
	else
	{
		for(int i{1};i <= n-k+1;++i)
		{
			if(a[i] != 1)
			{
				std::cout<<1<<'\n';
				return;
			}
		}
		std::cout<<2<<'\n';
	}
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
