#include<bits/stdc++.h>

void work()
{
	int n{}; std::cin>>n;
	std::string s{},t{};
	std::cin>>s>>t;

	if(s == t)
	{
		std::cout<<0<<'\n';
		return;
	}

	int cnt{},rev{};
	for(int i{};i<n;++i)
	{
		if(s[i] != t[i]) cnt++;
		if(s[i] != t[n-i-1]) rev++;
	}

	int ans1 = 2 * cnt - (cnt % 2);
	int ans2{};

	if(rev == 0) ans2 = 2;
	else ans2 = 2 * rev - (1 - rev % 2);

	std::cout<<std::min(ans1,ans2)<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;

	while(t--) work();

	return 0;
}
