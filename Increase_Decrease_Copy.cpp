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

		std::vector<int> a(n),b(n+1);
		for(int& x : a) std::cin>>x;
		for(int& x : b) std::cin>>x;

		long long ans{};
		long long extra = LLONG_MAX;

		for(int i{};i<n;++i)
		{
			ans += std::abs(b[i] - a[i]);

			int l = std::min(a[i],b[i]);
			int r = std::max(a[i],b[i]);

			if(l <= b[n] && b[n] <= r)
				extra = 1;
			else
				extra = std::min(extra,
					std::min(std::abs(a[i]-b[n]),std::abs(b[i]-b[n])) + 1);
		}

		ans += extra;

		std::cout<<ans<<'\n';
	}

	return 0;
}
