#include<bits/stdc++.h>
using ll = long long;

int main()
{
	ll n{};
	std::cin>>n;

	std::vector<ll> a(n);
	for(ll& i : a) std::cin>>i;
	std::sort(a.begin(),a.end());

	ll ans{1},l{};
	for(ll r{};r<n;++r)
	{
		while(a[r] - a[l] > 5) l++;
		ans = std::max(ans,r-l+1);
	}

	std::cout<<ans<<'\n';

	return 0;
}
