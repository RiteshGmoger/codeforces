#include<bits/stdc++.h>

void work()
{
	int r{},g{},b{};
	std::cin>>r>>g>>b;

	std::vector<std::pair<int,char>> v = {{r,'R'},{g,'G'},{b,'B'}};

	std::string ans{};

	while(true)
	{
		std::sort(v.rbegin(),v.rend());
		bool added{};

		for(int i{};i<3;++i)
		{
			char color = v[i].second;
			int cnt = v[i].first;

			if(cnt == 0) continue;

			int n = ans.size();
			if(n >= 1 && ans[n-1] == color) continue;
			if(n >= 3 && ans[n-3] == color) continue;

			ans += color;
			v[i].first--;
			added = true;
			break;
		}

		if(!added) break;
	}

	std::cout<<ans<<'\n';
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
