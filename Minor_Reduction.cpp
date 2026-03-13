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

		int pos{-1};
		int n = s.size();

		for(int i{n-2};i >=0;--i)
		{
			int num = (s[i] - '0') + (s[i+1] - '0');

			if(num >= 10)
			{
				pos = i;
				break;
			}
		}

		if(pos != -1)
		{
			int sum = (s[pos]-'0') + (s[pos+1] - '0');
			std::cout<<s.substr(0,pos)<<sum<<s.substr(pos+2)<<'\n';
		}
		else
		{
			int sum = (s[0] - '0') + (s[1] - '0');
			std::cout<<sum<<s.substr(2)<<'\n';
		}
	}

	return 0;
}
