#include<bits/stdc++.h>

void work()
{
	int n{};
	std::cin>>n;

	std::vector<long long> a(n);
	for(auto& it : a) std::cin>>it;

	long long mx = *max_element(a.begin(),a.end());

	long long k{},ans{};
	for(int i{};i<n;++i)
		k = std::gcd(k,mx - a[i]);

	if(k == 0)
	{
		std::cout<<1<<'\n';
		return;
	}

	for(int i{};i<n;++i)
		ans += (mx - a[i]) / k;

	std::set<long long> st(a.begin(),a.end());

	long long elm{mx - k};
	while(st.count(elm)) elm -= k;

	ans += (mx - elm) / k;

	std::cout<<ans<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin>>t;

	while(t--) work();

	return 0;
}
