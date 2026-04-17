#include<bits/stdc++.h>

void work()
{
	int n{};
	std::cin>>n;

	std::vector<long long> b(n);
	for(auto& it : b) std::cin>>it;

	long long mn = b[0];
	for(int i{1};i<n;++i)
	{
		if(b[i] > 2*mn - 1)
		{
			std::cout<<"NO\n";
			return;
		}
		mn = std::min(mn,b[i]);
	}

	std::cout<<"YES\n";
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
