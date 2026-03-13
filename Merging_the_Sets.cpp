#include<bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};  std::cin>>t;

	while(t--)
	{
		int n{},m{};
		std::cin>>n>>m;

		std::vector<std::vector<int>> s(n);
		std::vector<int> freq(m+1,0);
		std::vector<int> last(m+1,-1);

		for(int i{};i<n;++i)
		{
			int l{};
			std::cin>>l;

			s[i].resize(l);

			for(int j{};j<l;++j)
			{
				std::cin>>s[i][j];
				freq[s[i][j]]++;
				last[s[i][j]] = i;
			}
		}

		bool ok{};
		for(int i{1};i<=m;++i)
			if(freq[i] == 0)
			{
				std::cout<<"NO\n";
				ok = true;
				break;
			}
		if(ok) continue;

		std::vector<bool> used(n,false);
		int manditory{};

		for(int i{1};i<=m;++i)
			if(freq[i] == 1)
				if(!used[last[i]])
				{
					manditory++;
					used[last[i]] = true;
				}
		
		if(n - manditory >= 2) std::cout<<"YES\n";
		else std::cout<<"NO\n";
	}
	return 0;
}
