#include<bits/stdc++.h>

void work()
{
	int n{},k{};
	std::cin>>n>>k;

	int sum{};
	for(int i{};i<n;++i)
	{
		int temp{};
		std::cin>>temp;

		sum += temp;
	}

	if(sum%2 == 1 || (n*k)%2 == 0) std::cout<<"YES\n";
	else std::cout<<"NO\n";
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin>>t;

	while(t--) work();

	return 0;
}
