#include<bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin>>t;

	while(t--)
	{
		int n{};
		std::cin>>n;

		std::vector<long long> prefix(n+1,0);
		for(int i{};i<n;++i)
		{
			int temp{};
			std::cin>>temp;
			prefix[i+1] = prefix[i] + temp;
		}

		std::string str{};
		std::cin>>str;

		long long l{},r{n-1},ans{};

		while(l < r)
		{
			while(l < n && str[l] != 'L') l++;
			while(r > 0 && str[r] != 'R') r--;

			if(l < r)
			{
				ans += prefix[r+1] - prefix[l];
				l++; r--;
			}
		}
		
		std::cout<<ans<<'\n';
	}

	return 0;
}
