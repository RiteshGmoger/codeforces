#include<bits/stdc++.h>

int main()
{
	int n{};
	long long k{};
	std::cin>>n>>k;

	std::vector<long long> a(n);
	long long mx{};
	for(auto& it : a)
	{
		std::cin>>it;
		mx = std::max(mx,it);
	}

	long long cnt{a[0]},mv{};
	for(int i{1};i<n;++i)
	{
		if(cnt > a[i]) mv++;
		else
		{
			cnt = a[i];
			mv = 1;
		}

		if(mv == k)
		{
			std::cout<<cnt<<'\n';
			return 0;
		}
	}

	std::cout<<mx<<'\n';

	return 0;
}
