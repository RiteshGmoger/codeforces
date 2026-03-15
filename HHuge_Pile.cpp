#include<bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin>>t;

	while(t--)
	{
		long long n{},k{};
		std::cin>>n>>k;

		if(k > n)
		{
			std::cout<<-1<<'\n';
			continue;
		}

		long long ans{};
		long long l{n},r{n};

		while(r != 1)
		{
			if(l <= k && r >= k) break;
			l /= 2;
			r = r/2 + r%2;
			ans++;
		}

		if(l <= k && r >= k) std::cout<<ans<<'\n';
		else std::cout<<-1<<'\n';
	}

	return 0;
}
