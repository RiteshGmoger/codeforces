#include<bits/stdc++.h>

bool issquare(long long x)
{
	long long r = std::sqrt(x);
	return r*r == x;
}

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

		if((n%2 == 0 && issquare(n/2)) || (n%4 == 0 && issquare(n/4))) std::cout<<"YES\n";
		else std::cout<<"NO\n";
	}

	return 0;
}
