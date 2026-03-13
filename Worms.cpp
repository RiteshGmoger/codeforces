#include<bits/stdc++.h>

int main()
{
	int n{};
	std::cin>>n;
	std::vector<long long> pref(n);

	for(int i{};i<n;++i)
	{
		long long temp{};
		std::cin>>temp;
		pref[i]=temp+(i>0 ? pref[i-1] : 0);
	}

	int m{};
	std::cin>>m;

	while(m--)
	{
		long long temp{};
		std::cin>>temp;
		int idx=std::lower_bound(pref.begin(),pref.end(),temp)-pref.begin();

		std::cout<<idx+1<<'\n';
	}

	return 0;
}
