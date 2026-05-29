#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	int n{}; std::cin>>n;
	std::string s{}; std::cin>>s;

	s = '0'+s;

	int cnt{},s01{},s10{};
	for(int i{};i<n;++i)
	{
		if(s[i] != s[i+1]) cnt++;
		if(s[i] == '0' && s[i+1] == '1') s01++;
		if(s[i] == '1' && s[i+1] == '0') s10++;
	}

	int ans = n+cnt;

	if(s01 >= 2 || s10 >= 2) ans -= 2;
	else if(s01 >= 1 && s10 >= 1) ans -= 1;

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
