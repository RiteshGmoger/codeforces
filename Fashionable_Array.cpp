#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	int n{}; std::cin>>n;
	std::vector<int> a(n);
	for(auto& it : a) std::cin>>it;

	std::sort(a.begin(),a.end(),std::greater<int>());

	int ans1{},ans2{};
	for(int i{};i<n;++i)
	{
		if((a[i] + a[n-1])%2 == 0) break;
		
		ans1++;
	}
	std::reverse(a.begin(),a.end());

	for(int i{};i<n;++i)
	{
		if((a[i] + a[n-1])%2 == 0) break;

		ans2++;
	}

	std::cout<<std::min(ans1,ans2)<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}
