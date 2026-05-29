#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	int n{}; std::cin>>n;
	std::string s{}; std::cin>>s;

	int ans{};
	int i{};
	while(i<n && s[i] != '1') i++;
	if(i == 0)
	{
		ans++; i++;
	}
	while(i < n){
		if(s[i] != s[i-1]) ans++;
		i++;
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
