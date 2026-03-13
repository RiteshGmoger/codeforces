#include<bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin>>t;

	while(t--)
	{
		std::string s{};
		std::cin>>s;

		std::string_view a = s.substr(0,s.size()/2);
		std::string_view b = s.substr(s.size()/2);
	
		std::cout<<(a == b ? "YES\n" : "NO\n");
	}

	return 0;
}
