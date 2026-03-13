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

		int even{},odd{};

		for(int i{};i<2*n;++i)
		{
			int temp{};
			std::cin>>temp;

			if(temp%2 == 0) even++;
			else odd++;
		}

		std::cout<<(even == odd ? "YES\n" : "NO\n");
	}

	return 0;
}
