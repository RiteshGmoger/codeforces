#include<bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin>>t;

	while(t--)
	{
		int n{};
		std::cin>>n;
		
		std::vector<long long> a(n,0);
		std::vector<long long> b(n,0);

		long long amin{LLONG_MAX},bmin{LLONG_MAX},count{};

		for(int i{};i<n;++i)
		{
			std::cin>>a[i];
			amin = std::min(amin,a[i]);
		}
		for(int i{};i<n;++i)
		{
			std::cin>>b[i];
			bmin = std::min(bmin,b[i]);
		}

		for(int i{};i<n;++i)
		{
			count += std::max(a[i]-amin,b[i]-bmin);
		}

		std::cout<<count<<'\n';
	}

	return 0;
}
