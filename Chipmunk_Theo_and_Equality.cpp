#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using ll = long long;

void work()
{
	ll n{}; std::cin>>n;
	std::vector<ll> a(n);
	for(auto & it : a) std::cin>>it;

	std::unordered_set<ll> valid_targets;
	ll tmp_first{a[0]};
	while(1) {
		valid_targets.insert(tmp_first);
		if(tmp_first == 1) break;
		if(tmp_first % 2 == 0) tmp_first /= 2;
		else tmp_first++;
	}
	if(a[0] == 1) valid_targets.insert(2);

	std::map<ll,ll> mp{},cost{};
	for(int i{};i<n;++i)
	{
		ll tmp{a[i]},steps{};

		while(1)
		{
			if(valid_targets.count(tmp)) {
				mp[tmp]++;
				cost[tmp] += steps;
			}

			if(tmp == 1) break;

			if(tmp%2 == 0) tmp /= 2;
			else if(tmp%2 == 1) tmp++;

			steps++;
		}
		if(a[i] == 1 && valid_targets.count(2))
		{
			mp[2]++;
			cost[2]++;
		}
	}

	ll ans{LLONG_MAX};
	for(auto&[val,f] : mp)
		if(f == n) ans = std::min(ans,cost[val]);

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
