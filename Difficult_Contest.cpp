#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	std::string s{}; std::cin>>s;
	
	int t = std::count(s.begin(), s.end(), 'T');
	std::string res(t, 'T');

	for(char c : s)
		if(c != 'T') res += c;

	std::cout<<res<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}
