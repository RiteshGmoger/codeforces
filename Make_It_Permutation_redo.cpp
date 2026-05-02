#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using ll = long long;

void work()
{
	int n{};
	ll c{},d{};
	std::cin>>n>>c>>d;

	std::vector<ll> a(n);
	for(auto& it : a) std::cin>>it;

	std::sort(a.begin(),a.end());
	a.erase(std::unique(a.begin(),a.end()),a.end());

	ll ans = 1LL * n*c + d;

	for(int i{};i<(int)a.size();++i)
	{
		ll mx = 1LL * (n - (i+1))*c + (a[i] - (i+1))*d;
		ans = std::min(mx,ans);
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
