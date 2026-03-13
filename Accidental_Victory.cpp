#include<bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin>>t;

	while(t--)
	{
		int n{}; std::cin>>n;

		std::vector<std::pair<long long,int>> a(n);
		for(int i{};i<n;++i)
		{
			std::cin>>a[i].first;
			a[i].second = i+1;
		}

		std::sort(a.begin(),a.end());

		std::vector<long long> prefix(n);
		prefix[0] = a[0].first;

		for(int i{1};i<n;++i)
			prefix[i] = prefix[i-1] + a[i].first;

		int pos = n-1; 

		for(int i = n-2;i >=0;--i)
		{
			if(a[i+1].first > prefix[i]) break;

			pos = i;
		}

		std::vector<int> ans{};

		for(int i{pos};i<n;++i)	ans.push_back(a[i].second);

		std::sort(ans.begin(),ans.end());
		std::cout<<ans.size()<<'\n';;

		for(int& x : ans) std::cout<<x<<' ';
		std::cout<<'\n';
	}

	return 0;
}
