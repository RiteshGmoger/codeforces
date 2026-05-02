#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	int n{};
	std::string s{}; 
	std::cin>>n>>s;

	int ans{4};
	for(int i{3};i<n;++i)
	{
		int tmp{};
		tmp += (s[i-3] != '2');
		tmp += (s[i-2] != '0');
		tmp += (s[i-1] != '2');
		tmp += (s[i] != '6');

		ans =  std::min(ans, tmp);
	}

	int rem{};
	for(int i{3};i<n;++i)
		if(s[i-3] == '2' && s[i-2] == '0' && s[i-1] == '2' && s[i] == '5') rem++;

	std::cout<<(std::min(ans, rem))<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;

	while(t--) work();

	return 0;
}
