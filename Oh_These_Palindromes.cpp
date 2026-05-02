#pragma GCC optimize("O3")
#include<bits/stdc++.h>

int main()
{
	int n{}; std::cin>>n;
	std::string s{};
	std::cin>>s;

	std::sort(s.begin(),s.end());

	std::cout<<s<<'\n';

	return 0;
}
