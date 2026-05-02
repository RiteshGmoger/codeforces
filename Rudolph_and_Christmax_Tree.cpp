#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	int n{},d{},h{};
	std::cin>>n>>d>>h;

	std::vector<int> y(n);
	for(auto& it : y) std::cin>>it;

	long double ans = 1.0L * d*h / 2.0L;
	for(int i{};i<n-1;++i)
	{
		int gap = y[i+1] - y[i];

		if(gap >= h) ans += 1.0L * d*h / 2.0L;
		else ans += 1.0L * d * gap * (2.0L * h - gap) / (2.0L * h);
		// so for base formula is d*(h-gap)/h
	}

	std::cout<<std::fixed<<std::setprecision(10)<<ans<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;

	while(t--) work();

	return 0;
}
