#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using ll = long long;

bool solve(const std::vector<ll>& a, int reach)
{
	std::multiset<ll> ms(a.begin(),a.end());
	for(ll i{reach-1};i>=0;--i)
	{
		auto val = ms.find(i);
		if(val != ms.end()) ms.erase(val);
		else
		{
			val = ms.lower_bound(2*i+1);
			if(val == ms.end()) return false;
			ms.erase(val);
		}
	}

	return true;
}

void work()
{
	int n{}; std::cin>>n;

	std::vector<ll> a(n);
	for(auto& it : a) std::cin>>it;

	ll ans{},r{n+1};
	while(ans < r)
	{
		if(solve(a,(ans+r+1)/2)) ans = (ans+r+1)/2;
		else r = (ans+r+1)/2-1;
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
