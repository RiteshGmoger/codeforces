#include<bits/stdc++.h>
void work()
{
	int n{}; std::cin>>n;

	std::vector<int> v(n);
	for(int& x : v) std::cin>>x;

	int mx{},ans{};
	for(int i{};i<n;++i)
	{
		if(v[i] >= mx)
		{
			ans++;
			mx = v[i];
		}
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
