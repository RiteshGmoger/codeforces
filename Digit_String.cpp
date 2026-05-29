#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	std::string s{}; std::cin>>s;
	int four{},two{};

	for(char c : s)
	{
		if(c == '4') four++;
		if(c == '2') two++;
	}

	int ans{INT_MAX};
	int rem{};

	for(char c : s)
	{
		ans = std::min(ans, rem + two);

		if(c == '2') two--;
		else if(c == '1' || c == '3') rem++;
	}

	ans = std::min(ans,rem+two);

	std::cout<<four+ans<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}
