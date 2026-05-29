#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	int n{}; std::cin>>n;
	std::vector<int> a(n);
	for(auto& it : a) std::cin>>it;

	int ans{n+1};
	for(int i{};i<n;++i)
	{
		if(i-1 >= 0)
		{
			int mn = a[i];
			int mx = a[i];
			for(int j{i};j<n;++j)
			{
				mn = std::min(mn,a[j]);
				mx = std::max(mx,a[j]);

				if(mn <= a[i-1]+1 && mx >= a[i-1]-1) ans = std::min(ans,j - i);
			}
		}
		if(i+1 < n)
		{
			int mn = a[i];
			int mx = a[i];
			for(int j{i};j>=0;--j)
			{
				mn = std::min(mn,a[j]);
				mx = std::max(mx,a[j]);

				if(mn <= a[i+1]+1 && mx >= a[i+1]-1) ans = std::min(ans,i - j);
			}
		}
	}

	if(ans > n) std::cout<<-1<<'\n';
	else std::cout<<ans<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}
