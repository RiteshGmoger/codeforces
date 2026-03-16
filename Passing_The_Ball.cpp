#include<bits/stdc++.h>

void work()
{
	int n{}; std::cin>>n;

	std::string s{};
	std::cin>>s;

	int ans{},i{};
	while(i < n && s[i] != 'L') ans++ , i++;
	ans++;

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
