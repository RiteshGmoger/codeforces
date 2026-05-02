#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using i128 = __int128;
using ll = long long;

void work()
{
	int n{}; std::cin>>n;
	std::vector<std::pair<ll,ll>> xy(n);
	ll xs{},ys{},xt{},yt{};
	for(int i{};i<n;++i) std::cin>>xy[i].first>>xy[i].second;
	std::cin>>xs>>ys>>xt>>yt;

	i128 left = xt-xs;
	i128 right = yt-ys;
	i128 dist =left*left + right*right;

	for(int i{};i<n;++i)
	{
		left = xy[i].first-xt;
		right = xy[i].second-yt;
		i128 temp = left*left + right*right;

		if(dist >= temp)
		{
			std::cout<<"NO\n";
			return;
		}
	}

	std::cout<<"YES\n";
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;

	while(t--) work();

	return 0;
}
