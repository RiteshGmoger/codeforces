#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using ll = long long;

void work()
{
	int n{};
	ll px{},py{},qx{},qy{};
	std::cin>>n>>px>>py>>qx>>qy;
	std::vector<int> a(n);
	ll sum{};
	int mx{};
	for(int i{};i<n;++i)
	{
		std::cin>>a[i];
		sum += a[i];
		mx = std::max(mx,a[i]);
	}

	ll dist = ((px - qx)*(px - qx)) + ((py - qy)*(py - qy));
	ll min = std::max(0LL,2LL*mx - sum);
	min *=  min;
	sum *= sum;

	if(min <= dist && sum >= dist) std::cout<<"Yes\n";
	else std::cout<<"No\n";
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}
