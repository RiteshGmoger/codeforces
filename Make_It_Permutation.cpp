#pragma GCC optimize("O2")
#include<bits/stdc++.h>
using ll = long long;

void work()
{
	ll n{},c{},d{};
	std::cin>>n>>c>>d;
	
	std::vector<ll> a(n);
	for(auto& it : a) std::cin>>it;

	ll ans = n*c + d;
	std::sort(a.begin(),a.end());
	a.erase(unique(a.begin(), a.end()), a.end());

	for(int i{};i<(int)a.size();++i)
	{
		ll cost = 1LL * (n - (i+1))*c + (a[i] - (i+1))*d;
		ans = std::min(ans,cost);
	}

	std::cout<<ans<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}
