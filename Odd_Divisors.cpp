#include<bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin>>t;

	while(t--)
	{
		long long n{};
		std::cin>>n;

		while(n%2 == 0) n/=2;

		if(n == 1) std::cout<<"NO\n";
		else std::cout<<"YES\n";
	}
	return 0;
}
