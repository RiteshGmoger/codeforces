#include<bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin>>t;

	while(t--)
	{
		long long x{};
		std::cin>>x;

		bool ok{};

		for(long long i{1};i*i*i <= x;++i)
		{
			long long rem = x - i*i*i;

			long long b = cbrt(rem);

			for(long long chk = std::max(1LL,b-2);chk <= b+2;++chk)
			{
				if(chk*chk*chk == rem)
				{
					ok = true;
					break;
				}
			}

			if(ok) break;
		}

		std::cout<<(ok ? "YES" : "NO")<<'\n';
	}

	return 0;
}
