#include<bits/stdc++.h>

void work()
{
	int n{};
	std::cin>>n;

	std::string s{};
	std::cin>>s;

	int ans{};
	char prev1{},prev2{};
	for(int i{1};i<n;++i)
	{
		if((s[i-1] == prev1 && s[i] == prev2) ||
		    (s[i] == prev1 && s[i-1] == prev2))
			continue;

		ans++;
		prev1 = s[i-1];
		prev2 = s[i];
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
