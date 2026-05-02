#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	int n{},m{};
	std::cin>>n>>m;
	
	std::vector<std::vector<int>> c(m,std::vector<int>(n));
	for(int i{};i<n;++i)
		for(int j{};j<m;++j)
			std::cin>>c[j][i];

	long long ans{};
	for(int i{};i<m;++i)
	{
		std::sort(c[i].begin(),c[i].end());

		long long pref{};
		for(int j{};j<n;++j)
		{
			ans += 1LL* c[i][j] *j -pref;
			pref += c[i][j];
		}
	}

	std::cout<<ans<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;

	while(t--) work();

	return 0;
}
