#include<bits/stdc++.h>

void work()
{
	int n{},k{};
	std::cin>>n>>k;
	k--;

	std::vector<long long> a(n);
	for(auto& it : a) std::cin>>it;

	int x{n};
	for(int i{};i<n;++i)
	{
		if(a[i] > a[k])
		{
			x = i;
			break;
		}
	}

	int ans{};
	for(int change : {0,x})
	{
		if(change == n) continue;

		std::vector<int> nm(n);
		std::iota(nm.begin(),nm.end(),0);
		std::swap(nm[change],nm[k]);

		int mx{};
		int val = nm[0];
		for(int j{1};j<n;++j)
		{
			if(a[val] >= a[nm[j]])
			{
				if(val == k) mx++;
			}
			else
			{
				val = nm[j];
				if(val == k) mx++;
			}
		}

		ans = std::max(ans,mx);
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
