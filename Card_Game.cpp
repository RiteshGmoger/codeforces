#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	int n{}; std::cin>>n;
	std::string s{}; std::cin>>s;

	bool acnt{true};
	for(int i{};i<n-1;++i)
	{
		if(s[i] != 'A')
		{
			acnt = false;
			break;
		}
	}
	bool tmp = (s[n-2] == 'A' && s[n-1] == 'A');

	if(acnt || tmp) std::cout<<"Alice\n";
	else std::cout<<"Bob\n";
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}
