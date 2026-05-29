#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	int n{}; std::cin>>n;
	std::vector<int> a(n+1);
	for(int i{1};i<=n;++i) std::cin>>a[i];

	int mid = n/3;

	int pref{},center{},suff{};
	for(int i{1};i<=mid;++i) pref += a[i];
	for(int i{mid+1};i<=mid+mid;++i) center += a[i];
	for(int i{mid+mid+1};i<=n;++i) suff += a[i];

	if(((pref%3 != center%3) && (center%3 != suff%3) && (suff%3 != pref%3)) ||
		((pref%3 == center%3) && (center%3 == suff%3)))
		std::cout<<mid<<' '<<mid+mid<<'\n';
	else std::cout<<0<<' '<<0<<'\n';


}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}
