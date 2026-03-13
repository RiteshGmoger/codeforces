#include<bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin>>t;

	while(t--)
	{
		int n{},k{},sum{};
		std::cin>>n>>k;

		std::vector<int> a(n,0);
		std::vector<int> b(n,0);

		for(int i{};i<n;++i) 
		{
			std::cin>>a[i];
			sum += a[i];
		}

		for(int i{};i<n;++i) std::cin>>b[i];

		std::sort(a.begin(),a.end());
		std::sort(b.begin(),b.end(),std::greater<int>());

		int i{};

		while(k > 0 && a[i] < b[i])
		{
			sum -= a[i];
			sum += b[i];
			k--;
			i++;
		}

		std::cout<<sum<<'\n';
	}

	return 0;
}
