#include<bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;

	while(t--)
	{
		int n{}; std::cin>>n;
		std::vector<int> a(n),b(n);
		for(int &x : a) std::cin>>x;

		b = a;
		std::sort(b.begin(),b.end());

		if(a == b)
		{
			std::cout<<-1<<'\n';
			continue;
		}

		long long mx = *max_element(a.begin(),a.end());
		long long mn = *min_element(a.begin(),a.end());

		long long ans = LLONG_MAX;

		for(int i{};i<n;++i)
			if(a[i] != b[i])
				ans = std::min(ans,std::max(a[i] - mn,mx - a[i]));

		std::cout<<ans<<'\n';
	}

	return 0;
}
