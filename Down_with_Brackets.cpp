#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	std::string s{}; std::cin>>s;
	int n = s.size();

	int leftcnt{},rightcnt{};
	for(int i{1};i<n-2;++i)
	{
		if(s[i] == '(') leftcnt++;
		else rightcnt++;

		if(leftcnt < rightcnt)
		{
			std::cout<<"Yes\n";
			return;
		}
	}

	std::cout<<"No\n";
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}
