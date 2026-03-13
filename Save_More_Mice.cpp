#include<bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin>>t;

	while(t--)
	{
		int n{},k{};
		std::cin>>n>>k;

		std::vector<int>v(k);
		for(int i{};i<k;++i) std::cin>>v[i];

		int i{k-1},ans{},cat{};
		std::sort(v.begin(),v.end());

		while(i >= 0 && cat < v[i])
		{
			ans++;
			cat += n - v[i];
			i--;
		}

		std::cout<<ans<<'\n';
	}

	return 0;
}
