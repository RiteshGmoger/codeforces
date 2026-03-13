#include<bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin>>t;

	while(t--)
	{
		int n{},l{},r{};
		std::cin>>n>>l>>r;

		std::vector<long long> v(n,0);

		for(int i{};i<n;++i) std::cin>>v[i];

		long long ans{};
		std::sort(v.begin(),v.end());

		for(int i{};i<n;++i)
		{
			int left = std::lower_bound(v.begin()+i+1,v.end(),l - v[i]) - v.begin();
			int right = std::upper_bound(v.begin()+i+1,v.end(),r - v[i]) - v.begin();

			if(right > left)
				ans += right - left;
		}

		std::cout<< ans <<'\n';
	}

	return 0;
}
