#include<bits/stdc++.h>

bool isprime(long long n)
{
	if(n<2) return false;
	for(int i{2};i*i<=n;++i)
		if(n%i == 0) return false;

	return true;
}

int main()
{
	int n{};
	std::cin>>n;

	while(n--)
	{
		long long temp{};
		std::cin>>temp;
		
		long long sqroot = sqrt(temp);

		if(sqroot*sqroot == temp && isprime(sqroot)) std::cout<<"YES\n";
		else std::cout<<"NO\n";
	}

	return 0;
}
