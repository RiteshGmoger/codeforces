#include<bits/stdc++.h>

void work()
{
	int n{},k{};
	std::cin>>n>>k;

	std::vector<long long> a(n),b(k);
	for(auto& it : a) std::cin>>it;
	for(auto& it : b) std::cin>>it;

	std::sort(a.begin(),a.end(),std::greater<>());
	std::sort(b.begin(),b.end());

	long long ans{};
	int up{},dn{};
	while(up < n && dn < k)
	{
		while(up < n && b[dn] != 1)
		{
			ans += a[up];
			up++;
			b[dn]--;
		}
		up++;
		dn++;
	}
	if(up < n)
	{
		for(int i{up};i<n;++i)
			ans += a[i];
	}

	std::cout<<ans<<'\n';
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
