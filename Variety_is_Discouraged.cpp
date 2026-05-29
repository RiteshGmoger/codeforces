#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	int n{}; std::cin>>n;
	std::vector<int> a(n);
	std::unordered_map<int,int> mp{};
	for(auto& it : a)
	{
		std::cin>>it;
		mp[it]++;
	}

	int i{},bestl{-1},bestr{-1};
	while(i < n)
	{
		if(mp[a[i]] == 1)
		{
			int l{i+1};
			while(i < n && mp[a[i]] == 1) i++;
			int r{i};

			if(bestl == -1 || (r-l > bestr - bestl))
			{
				bestl = l;
				bestr = r;
			}
		}
		else i++;
	}

	if(bestl == -1) std::cout<<0<<'\n';
	else std::cout<<bestl<<' '<<bestr<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}
