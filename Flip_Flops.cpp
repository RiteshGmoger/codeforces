#include<bits/stdc++.h>

void work()
{
	long long n{},k{},c{};
	std::cin>>n>>c>>k;

	std::vector<long long> a(n);
	for(int i{};i<n;++i) std::cin>>a[i];

	std::sort(a.begin(),a.end());

	for(int i{};i<n;++i)
	{
		if(a[i] <= c)
		{
			long long need = std::min((long long)(c - a[i]),k);
			c += a[i] + need;
			k -= need;
		}
	}

	std::cout<<c<<'\n';
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
