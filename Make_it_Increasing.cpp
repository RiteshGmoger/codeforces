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

		std::vector<int> v(n);
		for(int i{};i<n;++i) std::cin>>v[i];

		if(n == 1)
		{
			std::cout<<"0\n";
			continue;
		}
		
		long long moves{},value = v[n-1];
		bool ok{true};

		for(int i{n-2};i >= 0;--i)
		{
			if(value == 0)
			{
				ok = false;
				break;
			}

			long long cur = v[i];	

			while(cur >= value)
			{
				cur /= 2;
				moves++;
			}

			value = cur;
		}
		
		if(!ok) std::cout<<"-1\n";
		else std::cout<<moves<<'\n';
	}

	return 0;
}
