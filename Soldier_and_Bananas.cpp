#include<bits/stdc++.h>

int main()
{
	int k{},n{},w{};
	std::cin>>k>>n>>w;

	long long ans = k*w*(w+1)/2;

	std::cout<<std::max(0LL,ans-n)<<'\n';

	return 0;
}
