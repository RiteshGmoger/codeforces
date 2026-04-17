#include<bits/stdc++.h>

void work()
{
	int n{};
	std::cin>>n;

	std::vector<int> freq(101,0);
	std::vector<int> a(n);
	for(int& it : a)
	{
		std::cin>>it;
		freq[it]++;
	}

	for(int i{};i<n;++i)
	{
		if(freq[a[i]] >= 2)
		{
			std::cout<<"YES\n";
			return;
		}
	}

	std::cout<<"NO\n";
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
