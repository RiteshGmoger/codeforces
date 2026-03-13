#include<bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;

	while(t--)
	{
		long long A{},B{},n;
		std::cin>>A>>B>>n;

		std::vector<long long> a(n),b(n);
		for(long long& i : a) std::cin>>i;
		for(long long& i : b) std::cin>>i;

		long long total{},mx{};

		for(int i{};i<n;++i)
		{
			long long hits = (b[i] + A -1) / A;
			total += hits * a[i];
			mx = std::max(mx,a[i]);
		}

		if(B + mx > total)
			std::cout<<"YES\n";
		else
			std::cout<<"NO\n";
	}

	return 0;
}
