#include<bits/stdc++.h>

void work()
{
	int n{};
	std::string s{};
	std::cin>>n>>s;

	int st{},end{n-1},ans{};
	while(st < end)
	{
		while(st < end && s[st] == '0') st++;
		while(st < end && s[end] == '1') end--;

		if(st == end) break;

		ans++;
		st++;
		end--;
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
