#pragma GCC optimize("O3")
#include<bits/stdc++.h>

int main()
{
	int m{}; std::cin>>m;

	std::vector<long long> a(m),b(m);
	for(auto& it : a) std::cin>>it;
	for(auto& it : b) std::cin>>it;

	std::vector<long long> o(m);
	std::iota(o.begin(),o.end(),0);

	std::sort(a.begin(),a.end(),std::greater<long long>());
	std::sort(o.begin(),o.end(),[&](int i,int j){
		return b[i] < b[j];
	});

	std::vector<long long> ans(m);
	for(int i{};i<m;++i)
		ans[o[i]] = a[i];

	for(int i{};i<m;++i)
		std::cout<<ans[i]<<' ';

	std::cout<<'\n';

	return 0;
}
