#include<bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin>>t;

	while(t--)
	{
		int n{};
		std::cin>>n;

		std::string s{};
		std::cin>>s;

		int count{},ans{};

		for(int i{};i<n;++i)
		{
			if(s[i] == '(')
				count++;
			else
			{
				if(count > 0) count--;
				else ans++;
			}
		}

		std::cout<<ans<<'\n';;
	}

	return 0;
}
