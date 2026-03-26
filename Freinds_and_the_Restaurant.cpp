#include<bits/stdc++.h>
using ll = long long;

void work()
{
	int n{};
	std::cin>>n;

	std::vector<ll> x(n),y(n);
	std::vector<int> diff(n);
	for(int i{};i<n;++i) std::cin>>x[i];
	for(int i{};i<n;++i) std::cin>>y[i];

	for(int i{};i<n;++i) diff[i] = y[i] - x[i];

	std::sort(diff.begin(),diff.end());
	int l{},r{n-1},ans{};

	while(l < r)
	{
		if(diff[l] + diff[r] >= 0)
		{
			ans++;
			l++; r--;
		}
		else l++;
	}

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
