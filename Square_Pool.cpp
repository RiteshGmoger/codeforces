#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	int n{},s{}; std::cin>>n>>s;
	int ans{};
	bool ok{};
	if(n%2 == 0) ok = true;

	for(int i{};i<n;++i)
	{
		int dx{},dy{},x{},y{};
		std::cin>>dx>>dy>>x>>y;

		if(ok && x == y && x == n/2)
		{
			ans++;
			continue;
		}
		if(x == y && dx == dy) ans++;
		else if(x+y == s && dx != dy) ans++;
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
