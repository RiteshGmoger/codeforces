#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using ll = long long;

void work()
{
	ll n{}; std::cin>>n;
	std::vector<ll> a(n+1);
	for(int i{1};i<=n;++i) std::cin>>a[i];

	ll ans{};
	for(int i{2};i<=n;i+=2)
	{
		if(i == n)
		{
			if(a[i] < a[i-1]) ans += a[i-1] - a[i];
			break;
		}

		if(a[i] < (a[i-1]+a[i+1]))
		{
			ll tmp = a[i-1]+a[i+1] - a[i];
			ans += tmp;
			a[i+1] = std::max(0LL,a[i+1] - tmp);
		}
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
