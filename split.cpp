#include<bits/stdc++.h>

void work()
{
	int n{},k{}; std::cin>>n>>k;

	std::vector<int> w(n),freq(n+1),ct(n+1);
	for(int& x : w) 
	{
		std::cin>>x;
		freq[x]++;
	}

	for(int i{};i<=n;++i)
	{
		if(freq[i]%k) return void(std::cout<<0<<'\n');
		else freq[i] /= k;
	}

	long long result{};

	for(int l{},r{};r >= l && r < n;++r)
	{
		ct[w[r]]++;
		while(ct[w[r]] > freq[w[r]])
		{
			ct[w[l]]--;
			l++;
		}
		
		result += (r - l + 1);
	}

	std::cout<<result<<'\n';
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
